#include <array>
#include <cmath>
#include <cstdio>

float mecanum_calc(float, float, float*);

//計算式チェック用
int main(){
    float motor_rate[4];

    mecanum_calc(40, 0, motor_rate);

    return 0;
}

float mecanum_calc(float x, float y, float* power_rate) {
    const float lx = 1.0f; //たて
    const float ly = 1.0f; //よこ
    const float l = lx + ly; 

    const float r = 1.0f; //角速度用半径

    float rad_s = 0.0f;//角速度
    float motor_pwm[4];
    

    //角速度求める
    float v = 0.0f;
    v = sqrt(x * x + y * y); 

    rad_s = v / r;  // v = r * ωより

    //メカナムの式
    std::array<std::array<float, 3>, 4> meca_4{{
        {1.0f, 1.0f, l}, //1
        {-1.0f, 1.0f, l}, //2
        {-1.0f, -1.0f, l}, //3
        {1.0f, -1.0f, l}, //4
    }};

    for(int i = 0; i < 4; i++){
        motor_pwm[i] = x * meca_4[i][0] + y * meca_4[i][1] + rad_s * meca_4[i][2];
        printf("%f\n", motor_pwm[i]);  //for check
    }

    const float max_power = 615.627197;

    printf("power_rate\n");  //for check

    for(int i = 0; i < 4; i++){
        power_rate[i] = motor_pwm[i] / max_power;
        printf("%f\n", power_rate[i]);  //for check
    }

    return 0;
}
