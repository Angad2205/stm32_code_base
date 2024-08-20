// PD13 ORANGE LED 
#include<stdint.h>
int main()
{
uint32_t *clock = (uint32_t *)0x40023830; // calculating the address of the RCC clock register
uint32_t *mode =  (uint32_t *)0x40020C00; // Address of the mode register
uint32_t *output = (uint32_t *)0x40020C14; // address of the output register

*clock |= (1<<3);  // setting the clock bit high for port D
*mode &= ~(3<<26); // reseting the previous bits value as it is imp because we can have any value in the past
*mode |= (1<<26);  // setting the mode bit high for the output Field
*output |= (1<<13); // setting the output as high
while(1);
}
