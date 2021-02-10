#include <stdio.h>
char grade;
int main( )
{
     printf(" Enter your grade (A-F) : ");
     scanf("%c",&grade);
     switch(grade)
     {
          case 'A':
               printf("Your score 80-100 points\n");
               break;
          case 'B':
               printf("Your score 70-79 points\n");
               break;
          case 'C':
               printf("Your score 60-69 points\n");
              break;
          case 'D':
               printf("Your score 50-59 points\n");
               break;
          case 'E':
               printf("Your score 0-49 points\n");
               break;
          default:
               printf("Please enter character (A-F) only, Thank you");
     }
     	return(0);
}
