// Check Perfect number
// Summation of factor is equal to number
// Input=6
// Output=true(1+2+3=6)
#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int no)
{
    int iSum=0;
    int i=0;

    for(i=1; i<no; i++)
    {
        if(no % i==0)
        {
            iSum=iSum+i;
        }
    
    }
    if(iSum==no)
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

    printf("Enter number:->");
    scanf("%d", &iValue);

    bRet = CheckPerfect(iValue);
    if (bRet == true)
    {
        printf("%d is a perfect number\n", iValue);
    }
    else
    {
        printf("%d is not a perfect number\n", iValue);
    }
    return 0;
}
