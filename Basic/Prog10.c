/*Write a program which accept N and print first 5 multiples of N
Input:4
Output:4 8 12 16 20 */

#include<stdio.h>

void MultipleDisplay(int iNo)
{
 int iCnt=0;
 int iMult=1;
 for(iCnt=1;iCnt<=10;iCnt++)
 {
    iMult=iNo*iCnt;
    printf("%d ",iMult);
 }

}


int main()
{
  int iValue=0;
  printf("Enter a number:");
  scanf("%d",&iValue);

  MultipleDisplay(iValue);

    return 0;
}