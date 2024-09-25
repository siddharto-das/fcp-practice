#include <sketch.h>
#include "shapes.h"

#define min(x, y) (((x) < (y)) ? (x) : (y))
#define abs(x) ((x) < 0 ? (-(x)) : (x))

int main()
{
	int i, j;
	float x, y;

	for (x = -300*10/11, i = -5; x <= 300*10/11; x += 600/11, i++)
		for (y = - 300*10/11, j = -5; y <= 300*10/11; y += 600/11, j++)
			concentric_circles(x, y, 300/11,
					   1 + min(abs(i), abs(j)));

	save_sketch("p1.8.svg");

	return 0;
}
