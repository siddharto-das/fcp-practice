#include <sketch.h>
#include <math.h>
#include "shapes.h"

int main()
{
	candle_light(100, 100, 100, 3, 0);
	candle_light(-100, 100, 100, 3, 0);
	candle_light(-100, -100, 100, 3, M_PI);
	candle_light(100, -100, 100, 3, M_PI);

	save_sketch("p1.1.svg");

	return 0;
}
