// WEIGHT CODE

#include "weight.h"

// Note : Default unit is Gram

float calculateWeight(Unit outputUnit, float value) {
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
