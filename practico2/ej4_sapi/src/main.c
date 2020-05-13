#include "sapi.h"

/*==================[definiciones]===========================================*/

#define ENABLE_M	T_FIL0
#define PWM_IZQ		PWM4
#define PWM_DER		PWM3

/*==================[implementaciones]=======================================*/
int main(void)
{
	/* Inicializar la placa */
	boardConfig();

	// Pin de habilitación
	gpioConfig(ENABLE_M, GPIO_ENABLE);
	gpioConfig(ENABLE_M, GPIO_OUTPUT);

	// Configuración del Timer para generar las señales PWM
	pwmInit( 0, PWM_ENABLE );
	// Configuración de los pines de salida PWM
	pwmInit(PWM_IZQ, PWM_ENABLE_OUTPUT);
	pwmInit(PWM_DER, PWM_ENABLE_OUTPUT);


	gpioWrite(ENABLE_M, ON);	// Pin de habilitación en alto
	pwmWrite(PWM_IZQ, 0 );		// Motor izquierdo gira a máxima velocidad para un lado
	pwmWrite(PWM_DER, 255 );	// Motor derecho gira a máxima velocidad para el otro lado

	for(;;);
	return 0;
}
