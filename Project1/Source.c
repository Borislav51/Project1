#include <stdio.h>
#include <stdlib.h>
#define A 5
#define M 5

int main()
{
	printf("Savin Borislav, group 1142\n");\
	printf("\n");
	int I[A][M];
	int z, y;
	for (z = 0; z < A; ++z)
	{
		for (y = 0; y < M; ++y)
		{
			if (z == 0 || y == 0)
			{
				I[z][y] = 1;
			}
			else
			{
				I[z][y] = 0;
			}
			if (z % 4 == 0)
			{
				I[z][y] = 1;
			}
			else if (y % 4 == 0)
			{
				I[z][y] = 1;
			}
		}
	}
	printf("Massiv:\n");
	int x = 0;
	for (z = 0; z < A; ++z)
	{
		for (y = 0; y < M; ++y)
		{
			printf("%d", I[z][y]);
			++x;
			if (x == M)
			{
				printf("\n");
				x = 0;
			}
		}
	}
	return 0;
}