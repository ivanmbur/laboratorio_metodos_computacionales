#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	FILE *in;
	in = fopen("random_walks.txt", "w");
	

	int i;
	for(i=0;i<100000;i++)
	{
		int n = 0;
		int j;
		for(j=0;j<500;j++)
		{
			float rand_num = drand48();
			if(rand_num < 0.5)
			{
				n = n + 1;
			}
			if(rand_num > 0.5)
			{
				n = n - 1;
			}
		}
		fprintf(in, "%d\n", n);
	}
}
