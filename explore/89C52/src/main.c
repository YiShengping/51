/*************************************
 * 
 *        89c52 sdcc blink demo
 * 
 * CPU: 89C52
 * FREQ: 12MHz
 * PIN: P00
 * 
 * ***********************************
*/

#include <reg52.h>
#include <stdio.h>
#include"display.h"
#include"fuction.c"
void main()
{
    while (1)
    {
       switch_control();
    }
    
    
}
