// Q6. Write a program to find difference of two sets.

#include<stdio.h>
int main()
{
	int a[] = {5, 23, 7, 90, 8, 1};
	int b[] = {5, 17, 89, 1};
	int c[6];
	int i, j, f, k = 0;
	for(i = 0; i < 6; i++)
	{
		f = 0;
		for(j = 0; j < 4; j++)
			if(a[i] == b[j])
			{
				f = 1;
				break;
			}
		if(f == 0)
		{
			c[k] = a[i];
			k++;
		}
	}
	printf("The difference is:");
	for(i = 0; i < k; i++)
		printf("%d, ", c[i]);
}
