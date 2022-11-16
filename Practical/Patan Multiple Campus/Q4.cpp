/* Q4. Write a program to find intersection of two sets 
and hence check if they are disjoint or not */

#include<stdio.h>
int main()
{
	int a[] = {5, 23, 7, 90, 8, 1}, b[] = {7, 88, 24, 1, 55}, c[5];
	int i = 0, j, k, l;
	for(j = 0; j < 5; j++)
		for(k = 0; k < 6; k++)
			if(b[j] == a[k])
			{
				c[i] = b[j];
				i++;					
				break;
			}		
	printf("Elements of intersection:");
	for(l = 0; l < i; l++)
		printf("%d,", c[l]);
	if(i == 0)
		printf("\nSets are disjoint");
	else
		printf("\nSets are not disjoint");
}
