//Check first occurance

#include<stdio.h>

int CheckLastOcc(int Arr[], int iSize, int iNo)
{
    int iCnt =0;

    for(iCnt=iSize-1; iCnt>=0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    if(iCnt==-1)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
  
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
    iRet=CheckLastOcc(arr,size,no);
    {
        printf("Element occur at %d",iRet);
    }

    return 0;
}