#include <sketch.h>
#include "shapes.h"

int main()
{
	int i;
	float x;
	for (x = -200, i = 1; x <= 200; x += 100, ++i)
		concentric_circles(x, 0, 50, i);

	save_sketch("p1.3.svg");

	return 0;
}
