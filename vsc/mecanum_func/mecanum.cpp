#include <array>
#include <cmath>
#include <cstdio>

float mecanum_calc(float x, float y, float* power_rate) {
    const float lx = 1.0f;
    const float ly = 1.0f;
    const float r = lx + ly;

    float rad_s = 0.0f;//角速度
    float motor_pwm[4];
    

    //角速度求める
    float v = 0.0f;
    v = sqrt(x * x + y * y); 

    rad_s = v / r;  // v = r * ωより

    //メカナムの式
    std::array<std::array<float, 3>, 4> meca_4{{
        {1.0f, -1.0f, r},
        {-1.0f, 1.0f, r},
        {-1.0f, 1.0f, r},
        {1.0f, -1.0f, r},
    }};

    for(int i = 0; i < 4; i++){
        motor_pwm[i] = x * meca_4[i][0] + y * meca_4[i][1] + rad_s * meca_4[i][2];
    }

    printf("%f", motor_pwm[0]);

    return 0;
}

int main(){
    mecanum_calc(0, 0, 0);

    return 0;
}
