/* Q13. Write a program to find quotient and remainder when
an integer is divided by a positive integer. */

#include<stdio.h>
int main()
{
	int a, d, q, r;
	printf("Enter dividend and divisor:\n");
	scanf("%d%d", &a, &d);
	q = a / d;
	r = a % d;
	printf("Quotient = %d\nRemainder = %d", q, r);	
}

