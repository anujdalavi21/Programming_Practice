//Check first occurance

#include<stdio.h>

int CheckFirstOcc(int Arr[], int iSize, int iNo)
{
    int iCnt =0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    return iCnt;
  
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

    printf("Enter the elemet to check the occurence of element:");
    scanf("%d",&no);
    iRet=CheckFirstOcc(arr,size,no);
    {
        printf("Element occur at %d",iRet);
    }

    return 0;
}