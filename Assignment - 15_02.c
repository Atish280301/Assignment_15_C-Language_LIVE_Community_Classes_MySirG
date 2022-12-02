/*Assignment - 15 C Language LIVE Community Classes MySirG*/
/*2. Write a recursive function to print first N natural numbers in reverse order*/

#include<stdio.h>
#include<conio.h>

int natr(int n)
{
	if(n > 0)
	{
		printf("%d\n",n);
		natr(n-1);
	}	
}
int main()
{
	int num, res;
	
	printf("Enter Value : ");
	scanf("%d",&num);
	
	res = natr(num);
	
	getch();
}
/*ATISH KUMAR SAHU
9937401932
kumarsahuatish280301@gmail.com
*/