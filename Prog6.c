#include<stdio.h>
void DisplayFactor(int no)
{
    int iCnt=0;

    for(iCnt=1; iCnt<no; iCnt++)
    {
        if(no % iCnt==0)
        {
            printf("%d\n",iCnt);
        }
    }


}

int main()
{
    int no=0;
    printf("Enter a number:");
    scanf("%d",&no);

    DisplayFactor(no);


    return 0;
}