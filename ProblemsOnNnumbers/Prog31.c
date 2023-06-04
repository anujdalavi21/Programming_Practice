//Check occurence of element
#include<stdio.h>
#include<stdbool.h>
bool CheckOcc(int Arr[], int iSize, int iNo)
{
    int iCnt =0, iFrequency = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFrequency++;
        }
    }
    if(iFrequency == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}



int main()
{
    int size=0;
    bool bRet=false;
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
    bRet=CheckOcc(arr,size,no);

    if(bRet==true)
    {
        printf("Element  occur in given array");
    }
    else
    {
       printf("Element not occur in given array");        
    }
    


    return 0;
}