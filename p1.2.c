#include <sketch.h>

int main()
{
	float x;
	for (x = -200; x <= 200; x += 100)
		draw_circle(x, 0, 50);

	save_sketch("p1.2.svg");

	return 0;
}
