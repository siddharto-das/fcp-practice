#include <sketch.h>
#include "shapes.h"

int main()
{
	float x, y;
	for (x = -250; x <= 250; x += 100)
		for (y = -250; y <= 250; y += 100)
			candle_light(x, y, 50, 3, 0);

	save_sketch("p1.6.svg");

	return 0;
}
