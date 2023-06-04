#include<stdio.h>

int CalculateFrequency(int Arr[], int iSize, int iNo)
{
    int iCnt =0, iFrequency = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}

int main()
{
    int size=0;
    int iRet=0;
    int no=0;
    printf("Enter the size of array:");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the elements of array:\n");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the elemet to calculate the frequency of element:");
    scanf("%d",&no);
    iRet=CountEven(arr,size,no);
    printf("Even elemnts in array are:%d",iRet);


    return 0;
}