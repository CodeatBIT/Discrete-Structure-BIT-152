// Q11. Write a program to find Cartesian product of two sets.

#include<stdio.h>
int main()
{
	char a[] = {'1', '2', '3'};
	char b[] = {'a', 'b'};      
    printf("{");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0;j < 2; j++)
        {
            printf(" (%c, %c), ", a[i],b[j]);
        }
    }
    printf("}");
}

