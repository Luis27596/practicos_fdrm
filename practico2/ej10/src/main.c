#include "sapi.h"
#include "motores.h"

/*==================[definiciones]===========================================*/

/*==================[implementaciones]=======================================*/
int main(void)
{
	boardConfig();
	iniMotores();
	prenderMotores();

	escribirMotorIzq(75);
	escribirMotorDer(100);

for(;;);
	return 0;
}

/*==================Velocidades de las ruedas================================

	angular:
	w_l = velocidad máxima del motor [RPM] * 2pi/60 * Porcentaje PWM (0.75)
	w_r = velocidad máxima del motor [RPM] * 2pi/60 * Porcentaje PWM (1)

	lineal:
	v_l = Radio de la rueda * w_L
	v_r = Radio de la rueda * w_r

  ==================Velocidades del robot====================================
  	angular:
  	w = R* (w_r - w_l) / distancia entre ruedas

  	lineal:
  	v = R* (w_r + w_l)/2

  ==================Radio del círculo que describen==========================

    r = v/w

*/
