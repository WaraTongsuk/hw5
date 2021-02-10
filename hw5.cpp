#include "stdio.h"
#include "conio.h"
main()
{
	int score,temp;
	char grade;
	printf("Enter the test score(0-100):");
	scanf("%d",score);
	temp = score / 10;
	switch (temp)
	{
		case 10:
		case 9 : grade = 'A';
			break;
		case 8 : grade = 'B';
			break;
		case 7 : grade = 'C';
			break;
		case 6 : grade = 'D';
			break;
		default : grade = 'F';
			break;
	}
	printf("The grade is : %c\n",grade);
	getch();
}
