// Q2. Write  a program to test set membership.

#include<stdio.h>
int main()
{
	int a[] = {5, 23, 7, 90, 8, 1};
	int b, i;
	printf("Enter a number:");
	scanf("%d", &b);
	for(i = 0; i < 6; i++)
		if(b == a[i])
		{
			printf("%d is a member of the set.", b);
			break;
		}
	if(i == 6)
		printf("%d is not a member of the set.", b);
}
