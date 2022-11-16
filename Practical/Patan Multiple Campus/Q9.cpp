// Q9. Write a program to implement inclusion-exclusion principle.

#include<stdio.h>
#define MAXSIZE 10
int main()
{
	int n1, n2, i, j, k = 0, c;
	int a[MAXSIZE], b[MAXSIZE];
	printf("Enger cardinality of first set:");
	scanf("%d", &n1);
	printf("Enter elemensts of first set:");
	for(i = 0; i < n1; i++)
		scanf("%d", &a[i]);
	printf("Enger cardinality of second set:");
	scanf("%d", &n2);
	printf("Enter elemensts of second set:");
	for(i = 0; i < n2; i++)
		scanf("%d", &b[i]);
	for(i = 0; i < n1; i++)
		for(j = 0; j < n2; j++)
			if(a[i] == b[j])
			{
				k++;					
				break;
			}
	c = n1 + n2 - k;
	printf("Number of elements in union: %d", c);
}
