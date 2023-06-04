//Check pallindrome
//121 =121 

#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(int iNo)
{
    int temp=0;;
    int iDigit=0;
    int iRev=0;

    if(iNo < 0)
    {
        iNo=-iNo;
    }

    temp=iNo;
    while(iNo !=0)
    {
        iDigit=iNo % 10;

        iRev=(iRev * 10) + iDigit;

        iNo=iNo / 10;

    }

    if(iRev==temp)
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
    int iValue = 0;
    bool bRet;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = CheckPallindrome(iValue);

    if(bRet == true)
    {
        printf("%d is pallindrome number \n",iValue);
    }
    else
    {
        printf("%d is not a pallindrome number \n",iValue);
    }
    return 0;
}