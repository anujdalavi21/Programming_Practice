#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int no)
{
    if(no % 5==0)
    {
        return true;
    }

    else
    {
        return false;
    }
}

int main()
{
    int iNo=0;
    bool bRet=false;
    printf("Enter a number:",&iNo);
    scanf("%d",&iNo);

    bRet=CheckDivisible(iNo);
    if(bRet==true)
    {
        printf("Number is divisible by 5");
    }
    else
    {
       printf("Number is not divisible by 5");
    }


    return 0;
}