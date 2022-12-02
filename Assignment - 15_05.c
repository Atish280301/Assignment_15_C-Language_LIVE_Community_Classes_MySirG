/*Assignment - 15 C Language LIVE Community Classes MySirG*/
/*5. Write a recursive function to print first N even natural numbers*/

#include<stdio.h>
#include<conio.h>

int EVEN(int n)
{
	if(n > 0)
	{
		EVEN(n-1);
		if(n % 2 == 0)
		{
			printf("%d\n",n);
		}
	}
}
int main()
{
	int num, res;
	
	printf("Enter Value : ");
	scanf("%d",&num);
	
	res = EVEN(num);
	
	getch();
}
/*ATISH KUMAR SAHU
9937401932
kumarsahuatish280301@gmail.com
*/
