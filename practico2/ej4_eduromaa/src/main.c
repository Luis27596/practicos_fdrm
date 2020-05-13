#include "sapi.h"
#include "motores.h"

/*==================[definiciones]===========================================*/

/*==================[implementaciones]=======================================*/
int main(void)
{
	/* Inicializar la placa */
	boardConfig();

	// Inicialización de los motores
	iniMotores();

	prenderMotores();

	escribirMotorIzq(-100);	// Motor izquierdo a máxima velocidad hacia un lado
	escribirMotorDer(100);	// Motor derecho a máxima velocidad hacia el otro

	for(;;);
	return 0;
}
