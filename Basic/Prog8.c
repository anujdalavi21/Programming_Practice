/*Write a program which  accept number from user and print its numbers line
Input:4
Output:-4 -3 -2 -1 0 1 2 3 4 */

#include<stdio.h>
void Display(int iNo)
{
  int iCnt=0;
  for(iCnt=0;iCnt<=iNo;iCnt++,iCnt--)
  {
    printf("%d %d",iCnt,iCnt);
  }


}

int main()
{
  int iValue=0;
  printf("Enter a number:");
  scanf("%d",&iValue);

  Display(iValue);

    return 0;
}