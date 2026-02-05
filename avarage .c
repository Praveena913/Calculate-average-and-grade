#include<stdio.h>
#include<conio.h>
float calculateAverage(int grades[],int n)
{
   int i;
   float sum=0;
   for(i=0;i<n;i++)
   {
     sum= sum+grades[i];
   }
   return sum/n;
}
char calculateGrade(float avg)
{ 
  if(avg>=90)
     return 'A' ;
  else if(avg>=80)
     return 'B' ;
  else if(avg>=70)
     return 'C' ;
  else if(avg>=60)
     return 'D' ;
  else 
      return 'F' ;
}
void main()
{ 
   int i,n;
   int grades[5];
   float average;
   char letter;
   clrscr();
   printf("How many grades(1 to 5)? ");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      printf("Enter the grades %d: ",i+1);
      scanf("%d",&grades[i]);
   }
   average=calculateAverage(grades,n);
   letter=calculateGrade(average);
   printf("Average: %.2f\n", average);
   printf("Letter grade: %c\n",letter);
   getch();
}  
    
     
