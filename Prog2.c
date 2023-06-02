#include<stdio.h>
int Addition(int no1,int no2)
{
    int iAns=0;
    iAns=no1+no2;
    return iAns;

}
int main()
{
    int no1=0;
    int no2=0;
    int iRet=0;

    printf("Enter first number:");
    scanf("%d",&no1);

    printf("Enter second number:");
    scanf("%d",&no2);

    iRet=Addition(no1,no2);
    printf("Addition of two number is:%d",iRet);
    
    return 0;
}