// Q3. Write a program to find union of two sets.

#include<stdio.h>
int main()
{
	int a[] = {5, 23, 7, 90, 8, 1}, b[] = {7, 88, 24, 1, 55}, c[11];
	int i, j, k, l;
	for(i = 0; i < 6; i++)
		c[i] = a[i];
	for(j = 0; j < 5; j++)
	{
		for(k = 0; k < 6; k++)
			if(b[j] == a[k])					
				break;			
		if(k == 6)
		{
			c[i] = b[j];
			i++;
		}
	}
	printf("Elements of union:");
	for(l = 0; l < i; l++)
		printf("%d,", c[l]);
}
