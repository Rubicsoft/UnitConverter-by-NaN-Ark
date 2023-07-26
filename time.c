// TIME CODE

#include "time.h"

// Note : Default unit is Minute

float calculateTime(Unit outputUnit, float value) {
	switch(outputUnit) {
		case SECOND:
			value /= 60;
			break;
		case HOUR:
			value *= 60;
			break;
		case DAY:
			value *= 1440;
			break;
		case WEEK:
			value *= 10080;
			break;
	}
	
	return value;
}
