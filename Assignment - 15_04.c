/*Assignment - 15 C Language LIVE Community Classes MySirG*/
/*3. Write a recursive function to print first N odd natural numbers*/

#include<stdio.h>
#include<conio.h>

int ODD(int n)
{
	if(n > 0)
	{
		if(n % 2 != 0)
		{
			printf("%d\n",n);
		}
		ODD(n-1);
	}
}
int main()
{
	int num, res;
	
	printf("Enter Value : ");
	scanf("%d",&num);
	
	res = ODD(num);
	
	getch();
}
/*ATISH KUMAR SAHU
9937401932
kumarsahuatish280301@gmail.com
*/