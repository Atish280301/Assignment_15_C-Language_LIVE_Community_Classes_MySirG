/*Assignment - 15 C Language LIVE Community Classes MySirG*/
/*8. Write a recursive function to calculate sum of first N natural numbers*/

#include<stdio.h>
#include<conio.h>

int SUMN(int n)
{
	int sum;
	
	if(n>0)
	{
		sum = n + SUMN(n-1);	
	}
	return sum;
}
int main()
{
	int num, res;
	
	printf("Enter Value : ");
	scanf("%d",&num);
	
	res = SUMN(num);
	
	printf("Sum : %d",res);
	
	getch();
}
/*ATISH KUMAR SAHU
9937401932
kumarsahuatish280301@gmail.com
*/