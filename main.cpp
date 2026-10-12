#include <stdint>

 constexpr uint32_t gpio_pin=2; 
 constexpr uint32_t gpio_w1ts=0x3FF44008;
 constexpr uint32_t gpio_w1tc=0x3FF4400C;
 constexpr uint32_t gpio_enable=0x3FF44020;
 
 void delay(volatile uint32_t loop)
 {
     while(loop--)
     for(int i=0;i<10000;i++)
     {
    }
 }
 void app_main()
 {
     volatile uint32_t* w1ts=(volatile uint32_t*)gpio_w1ts;
      volatile uint32_t* w1tc=(volatile uint32_t*)gpio_w1tc;
       volatile uint32_t* enable=(volatile uint32_t*)gpio_enable;
       
       *enable=(1<<gpio_pin);
       while(1)
       {
           *w1ts=(1<<gpio_pin);
           delay(500);
           *w1tc=(1<<gpio_pin);
           delay(500);
       }
 }
