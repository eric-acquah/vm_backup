#include <stdio.h>

/**
 *main - change the direction of the ship to south-east
 *
 *Return 0 (Success)
 */

void go_south_east(int *, int *);

int main(void)
{
	int latitude = 32;
	int longitude = -64;

	go_south_east(&latitude, &longitude);
	printf("Avast! now at [%d, %d]\n", latitude, longitude);
	return (0);
}


/**
 *go_south_east - change ship direction by reducing latitude and increase lon..
 *@lat: latitude pointer
 *@lon: longitude pointer
 */

void go_south_east(int *lat, int *lon)
{
	*lat = *lat - 1;
	*lon = *lon + 1;
}
