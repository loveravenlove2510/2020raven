#include <kipr/wombat.h>

int main()
{
    printf("Hello World\n");
    
    motor(0,100);//forward
    motor(3,100);
    msleep(2900); 
    
    ao();
    msleep(500);
    
    motor(0,100);//turn left
    motor(3,-100);
    msleep(2000);
    
    ao();
    msleep(500);	
   
    
    motor(0,100);//forward
    motor(3,100);
    msleep(1200);
    
    ao();
    msleep(500);
   
    
    motor(0,-100);//turn right
    motor(3,100);
    msleep(625);
    
    ao();
    msleep(500);
    
    motor(0,100);//forward
    motor(3,100);
    msleep(3050);
   
    
    ao();
    msleep(500);
    
    motor(0,-100);//backwards
    motor(3,-100);
    msleep(1500);
    
    motor(0,100);//turn left
    motor(3,10);
    msleep(750);
    
    ao();
    msleep(500);
    
    
    motor(0,100);//forward
    motor(3,100);
    msleep(1030);
    
    motor(0,100);//turn left
    motor(3,20);
    msleep(3000);
    
    ao();
    msleep(500);
    
    
    motor(0,100);//forward
    motor(3,100);
    msleep(2000);
    
    ao();
    msleep(500);
    
    
    motor(0,100);//turn left
    motor(3,5);
    msleep(1000);

   
    ao();
    msleep(500);
    
    motor(0,100);//forward
    motor(3,100);
    msleep(1500);
    
    ao();
    msleep(500);
    
    
    return 0;
}
