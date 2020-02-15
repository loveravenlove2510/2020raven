#include <kipr/wombat.h>

int main()
{
    printf("Hello World\n");
    
    
    motor(0,100);  //drive forward
    motor(3,100);
    msleep(1000);
    
    enable_servos(); 
    set_servo_position(3,392);//open claw
    msleep(1500);
    set_servo_position(3,1934);//close claw
    msleep(50);
    ao();
    msleep(500);

	motor(3,-100); //drive backward
    motor(0,-100);
    msleep(50);
    
    set_servo_position (0,875); //claw straight position
    msleep(50);
    ao();
    
    motor(3,-100); //drive backward with a right turn
    motor(0,-80);
    msleep(3200);
    ao();
set_servo_position ( 3,392); //open claw
  msleep(500);
    ao();
    msleep(500);
   
    
    
    return 0;
}

