// INput=5
// Output=5+4+3+2+1=15

#include<stdio.h>
int Summation(int no)
{
    int iSum=0;

    for(int i=1; i<=no;i++)
    {
        iSum=iSum + i;
    }
    return iSum;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    iRet = Summation(iValue);
    printf("Summation is : %d\n", iRet);

    return 0;
}