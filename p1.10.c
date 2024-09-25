#include <sketch.h>
#include <math.h>

#include "shapes.h"

int main()
{
	float angle;
	for (angle = 0; angle < 2*M_PI; angle += M_PI/3)
		candle_light(100*cosf(angle), 100*sinf(angle), 50, 3,
			angle - M_PI/2);
	concentric_circles(0, 0, 50, 3);
	draw_circle(0, 0, 150);

	save_sketch("p1.10.svg");

	return 0;
}
