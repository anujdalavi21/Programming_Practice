//Count even element in array

#include<stdio.h>

int CountEven(int arr[] , int size)
{
    int iCnt=0;
    int iCount=0;

    for(iCnt=0; iCnt<size; iCnt++)   
    {
        if(arr[iCnt] % 2==0)
        {
            iCount++;
        }
    }
    return iCount;

}

int main()
{
    int no=0;
    int iRet=0;
    printf("Enter the size of array:");
    scanf("%d",&no);

    int arr[no];
    printf("Enter the elements of array:\n");
    for(int i=0; i<no; i++)
    {
        scanf("%d",&arr[i]);
    }
    iRet=CountEven(arr,no);
    printf("Even elemnts in array are:%d",iRet);


    return 0;
}