// LENGTH CODE

#include "length.h"

// Note : Default unit is Meter

float calculateMeter(Unit outputUnit, float value) {
	switch(outputUnit) {
		case NANO:
			value /= 1000000000;
			break;
		case MICRO:
			value /= 1000000;
			break;
		case MILI:
			value /= 1000;
			break;
		case CENTI:
			value /= 100;
			break;
		case DECI:
			value /= 10;
			break;
		case DECA:
			value *= 10;
			break;
		case HECTO:
			value *= 100;
			break;
		case KILO:
			value *= 1000;
		case MEGA:
			value *= 1000000;
			break;
		case GIGA:
			value *= 1000000000;
			break;
	}
	
	return value;
}
