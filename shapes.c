#include <sketch.h>
#include <math.h>

void concentric_circles(float x, float y, float r, int n)
{
	int i;
	for (i = 1; i <= n; i++)
		draw_circle(x, y, r*i/n);
}

void candle_light(float x, float y, float r, int n, float rot)
{
	int i;
	for (i = 1; i <= n; i++)
		draw_circle(x + (n-i)*r*sinf(rot)/n,
			    y - (n-i)*r*cosf(rot)/n,
			    i*r/n);
}
