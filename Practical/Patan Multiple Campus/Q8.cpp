/* Q8. Write a program to check if a set is subset
(also proper subset) of another set. */

#include<stdio.h>
int main()
{
	int a[] = {5, 23, 7, 99};
	int b[] = {5, 7, 23, 1, 8, 90};
	int i, j, f, c = 0;
	for(i = 0; i < 4; i++)
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
			printf("Set a is not subset of set b");
			c = 1;
			break;
		}
	}
	if(c == 0)
		printf("Set a is subset of set b");
}
