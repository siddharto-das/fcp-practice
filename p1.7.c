#include <sketch.h>
#include "shapes.h"

int main()
{
	float x, y;
	int i, j;
	for (i = 1, x = -250; x <= 250; i++, x += 100)
		for (j = 1, y = 250; y >= -250; j++, y -= 100)
			concentric_circles(x, y, 50, i > j ? i : j);

	save_sketch("p1.7.svg");

	return 0;
}
