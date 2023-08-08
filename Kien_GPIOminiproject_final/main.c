#include "Gpio.h"


int main(void)
{
	/** Call Function intialize led and button */
	Gpio_Init();
	/**	call Function Interrupt	*/
	PORTC_IRQHandler();
	
	/**	Call Main_Function	*/
	while(1)
	{
	Main_Function();
	}
	
}
