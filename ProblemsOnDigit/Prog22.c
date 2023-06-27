// Check Armstrong number
#include <stdio.h>
#include <stdbool.h>

bool CheckArmstrong(int no)
{
    int iDigit = 0, iDigitCnt = 0, temp = 0, iMult = 1, iSum = 0;

    temp = no;

    while (no != 0)
    {
        iDigit = iDigit % 10;
        iDigitCnt++;

        no = no / 10;
    }

    no = temp;

    while (no != 0)
    {
        iMult=1;
        int iCnt = 0;
        iDigit = iDigit % 10;
        for (iCnt = 1; iCnt <= iDigitCnt; iCnt++)
        {
            iMult = iMult * iDigit;
        }

        iSum = iSum + iMult;
        no = no / 10;
    }
    if (iSum == temp)
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

    printf("Enter number : \n");
    scanf("%d", &iValue);

    bRet = CheckArmstrong(iValue);

    if (bRet == true)
    {
        printf("%d is armstrong number\n", iValue);
    }
    else
    {
        printf("%d is not armstrong number\n", iValue);
    }

    return 0;
}
