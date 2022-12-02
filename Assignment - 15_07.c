/*Assignment - 15 C Language LIVE Community Classes MySirG*/
/*7. Write a recursive function to print squares of first N natural numbers*/

#include<stdio.h>
#include<conio.h>

int square(int n)
{
	if(n>0)
	{
		square(n-1);
		
		printf("%d Square : %d\n",n,n*n);
	}
}
int main()
{
	int num, res;
	
	printf("Enter Value : ");
	scanf("%d",&num);
	
	res = square(num);
	
	getch();
}
/*ATISH KUMAR SAHU
9937401932
kumarsahuatish280301@gmail.com
*/