// Q5. Write a program to find complement of a set.

#include<stdio.h>
int main()
{
	int u[] = {5, 23, 7, 90, 8, 1, 55, 75};
	int a[] = {23, 1, 75};
	int b[8];
	int i, j, k, l = 0, m;
	for(i = 0; i < 8; i++)
	{
		k = 0;
		for(j = 0; j < 3; j++)
			if(u[i] == a[j])
				k = 1;
		if(k == 0)
		{
			b[l] = u[i];
			l++; 
		}
	}
	printf("Elements of complement:");
	for(m = 0; m < l; m++)
		printf("%d,", b[m]);
}
