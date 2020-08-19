#include<stdio.h>
main()
{
	int N;//here N is student's marks//
	printf("Enter the value of N:");
	scanf("%d",&N);
	if(N>=85&&N<=100)
	{
		printf("Grade A\n");
	}
	else if(N>=70&&N<=84)
	{
		printf("Grade B\n");
	}
	else if(N>=55&&N<=69)
	{
		printf("Grade C\n");
	}
	else if(N>=40&&N<=54)
	{
		printf("Grade D\n");
	}
	else
	{
		printf("Grade F\n");
	}
	return 0;
}


