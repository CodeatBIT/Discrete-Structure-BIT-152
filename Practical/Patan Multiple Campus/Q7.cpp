// Q7. Write a program to check equality of two sets.

#include<stdio.h>
int main()
{
	int a[] = {5, 23, 7, 90, 8, 1};
	int b[] = {5, 7, 23, 1, 8, 90};
	int i, j, f, c = 0;
	for(i = 0; i < 6; i++)
	{
		f = 0;
		for(j = 0; j < 6; j++)
			if(a[i] == b[j])
			{
				f = 1;
				break;
			}
		if(f == 0)
		{
			printf("Sets are not equal");
			c = 1;
			break;
		}
	}
	if(c == 0)
		printf("Sets are equal");
}
