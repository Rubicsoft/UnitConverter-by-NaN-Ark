// DATA CODE
#include "data.h"

// Note : Default unit is MiB

float calculateData(Unit outputUnit, float value) {
	switch(outputUnit) {
		case KILO:
			value /= 1024;
		case GIGA:
			value *= 1024;
			break;
		case TERA:
			value *= 1048576;
			break;
	}
	
	return value;
}
