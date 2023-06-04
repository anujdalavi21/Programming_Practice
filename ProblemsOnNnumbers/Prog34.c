//Maximum element from given array
#include<stdio.h>

int Max(int arr[] , int size)
{
    int iCnt=0;
    int iMax=arr[0];

    for(iCnt=0; iCnt<size; iCnt++)
    {
        if(arr[iCnt] > iMax)
        {
            iMax=arr[iCnt];
        }
    
    }
    return iMax;

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
    iRet=Max(arr,no);
    printf("Maximum elemnt from given array:%d",iRet);


    return 0;
}