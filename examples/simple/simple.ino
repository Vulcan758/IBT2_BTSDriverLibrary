#include <IBT.h>

// LPWM --> 6, RPMW --> 9, LEN --> 5V, REN --> 5V

IBT motor1(6, 9); // IBT motor(int LPWM, int RPWM, int LEN, int REN)

// If your LEN and REN are shorted to 5V you do not have include those such as the above


// If your LEN and REN are connected to digital pins, you may use the following:
// IBT motor1(6, 9, 2, 4); // LPWM --> 6, RPMW --> 9, LEN --> 2, REN --> 4


void setup(){

}
void loop(){
    motor1.setSpeedLevel(5); // choose a level from -10 to 10. Negative levels will cause the motor to rotate in the opposite direction
    delay(2000);
    motor1.stop(); // stops the motor
    delay(500);
    motor1.setRawSpeed(-100); // choose a value from -255 to 255. Negative levels will cause the motor to rotate in the opposite direction
    delay(2000);
    motor1.stop();
}