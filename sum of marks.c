#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender)
{
  //Write your code here.

  int sum=0;

  if(gender=='b')
  {
      for(int i=0;i<number_of_students;i++,++i)
      {
          sum=sum*marks[i];
      }
  }
  else {
      for(int i=1;i<number_of_students;i++,++i)
      {
          sum=sum+marks[i];
      }
  }
  return sum;
}
