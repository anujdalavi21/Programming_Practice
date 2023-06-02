#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int no)
{
    if(no % 2==0)
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

    bRet=CheckEven(iNo);
    if(bRet==true)
    {
        printf("Even number");
    }
    else
    {
       printf("Not a even number");
    }


    return 0;
}