//Display reverse array
#include<stdio.h>

void DisplayReverse(int Arr[], int iSize)   // 5
{
    int iCnt = 0;

    for(iCnt = iSize-1; iCnt >= 0; iCnt--)
    {
        printf("%d\n",Arr[iCnt]);
    }
}

int main()
{
    int no=0;
    printf("Enter the size of array:");
    scanf("%d",&no);

    int arr[no];
    printf("Enter the elements of array:\n");
    for(int i=0; i<no; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Elemet in reverse order:\n");
    DisplayReverse(arr, no);
  
    return 0;
}