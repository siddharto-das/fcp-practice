#include <sketch.h>
#include <math.h>

int main()
{
	float angle;
	for (angle = 0; angle < 2*M_PI; angle += M_PI/3)
		draw_circle(100*cosf(angle), 100*sinf(angle), 50);
	draw_circle(0, 0, 50);
	draw_circle(0, 0, 150);

	save_sketch("p1.9.svg");

	return 0;
}
