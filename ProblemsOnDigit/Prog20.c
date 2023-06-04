// Reverse a digit

#include<stdio.h>

int Reverse(int no)
{
    int iDigit=0;
    int iRev=0;

    while(no !=0)
    {
        iDigit=no % 10;

        iRev=(iRev*10) + iDigit;

        no=no / 10;
    }
    return iRev;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number\n");
    scanf("%d", &iValue);

    iRet = Reverse(iValue); // Reverse(7562)

    printf("Reverse number is : %d\n", iRet);

    return 0;
}
