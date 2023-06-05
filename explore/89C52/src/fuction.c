#include<reg52.h>
void delay(int ms){
    for (int i = 0; i < ms; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            /* code */
        }
        
    }
    
}
void led_arrary(int count){
    unsigned char str[]={0xfe,0xfd,0xfb,0xf7,0xef,0xdf,0xbf,0x7f};
    for (int i = 0; i < 8; i++)
    {
        P1=str[i];
        delay(count);
    } 
}
void led_crol(int count){
   int temp=0x01;
    for (int i = 0; i < 8; i++)
    {
        P1=~temp;
        
        delay(count);
        P1=~(temp<<=1);
    }    
}
void switch_control(){    
        int temp=0x01;
        P3=0xff;
        temp=P3&0xff;
        P1=temp;   
}