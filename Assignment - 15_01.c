/*Assignment - 15 C Language LIVE Community Classes MySirG*/
/*1. Write a recursive function to print first N natural numbers*/

#include<stdio.h>
#include<conio.h>

int nat(int n)
{
	if(n > 0)
	{
		nat(n-1);
		
		printf("%d\n",n);
	}
}
int main()
{
	int num, res;
	
	printf("Enter Value : ");
	scanf("%d",&num);
	
	res = nat(num);
	getch();
}
/*ATISH KUMAR SAHU
9937401932
kumarsahuatish280301@gmail.com
*/