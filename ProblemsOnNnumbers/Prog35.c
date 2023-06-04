//Maximum element from given array
#include<stdio.h>

int Min(int arr[] , int size)
{
    int iCnt=0;
    int iMin=arr[0];

    for(iCnt=0; iCnt<size; iCnt++)
    {
        if(arr[iCnt] < iMin)
        {
            iMin=arr[iCnt];
        }
    
    }
    return iMin;

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
    iRet=Min(arr,no);
    printf("Maximum elemnt from given array:%d",iRet);


    return 0;
}