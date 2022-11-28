#include <stdio.h>
#include <math.h>

int main()
{
	float z = 9.761;
	float out = pow(z, 6) + 13 * pow(z, 4) + 7 * pow(z, 3) + 14 * pow(z, 2) - 2 * z + 21;
	printf("Out:%f", out);
	return 0;
}

