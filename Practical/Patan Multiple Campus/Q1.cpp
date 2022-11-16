/* Q1. Write a program to test truth 
values of logical connectives. */

#include<stdio.h>
int main()
{
	int p, q;
	printf("Enter p & q (0 or 1):\n");
	scanf("%d%d", &p, &q);
	printf("p && q = %d\n", p && q);	
	printf("p || q = %d\n", p || q);
	printf("!p = %d\n", !p);
	printf("p -> q = %d\n", !p || q);
	printf("p <-> q = %d\n", (!p || q) && (!q || p));
}
