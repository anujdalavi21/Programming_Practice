//Display Even elements from array

#include<stdio.h>
#include<stdlib.h>

int Summation(int ptr[], int size)
{
    int iCnt=0;
    int iSum=0;

    for(iCnt=0; iCnt<size; iCnt++)
    {
        iSum=iSum+ptr[iCnt];
    }
    return iSum;
}

int main()
{
    int size=0;
    int *ptr=NULL;
    int i=0;
    int iCnt=0;
    int iRet=0;
    

    printf("Enter the size of array:");
    scanf("%d",&size);

    ptr=(int *)malloc(size * sizeof(int));

    printf("Enter the elemnt of array:\n");

     for(iCnt = 0; iCnt < size; iCnt++)
    {
        scanf("%d",&ptr[iCnt]); 
    }

    iRet=Summation(ptr,size);
    printf("Summation of numbers are %d",iRet);

    return 0;
}
