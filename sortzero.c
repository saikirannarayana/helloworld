#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void sortZeroOneBasic(int* arr, int arr_size) {


    int i, j,n=arr_size;
   for (i = 0; i < n-1; i++)
   {


       for (j = 0; j < n-i-1; j++)
       {


           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
       }
       }
    return ;
}
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


void sortZeroOneCount(int* arr, int arr_size) {


    int i=0,count=0;
    for(i=0;i<arr_size;i++)
    {
        if(arr[i]==0)
        {
            count++;
        }
    }
    for(i=0;i<arr_size;i++)
    {
        if(i<count)
        {
            arr[i]=0;
        }
        else{
            arr[i]=1;
        }
    }
    return ;
}

void sortZeroOneOptimized(int* arr, int arr_size) {


    int i,n=arr_size;
    int k=n-1;
    for(i=0;i<arr_size/2;i++)
    {

         if(arr[i]==1)
        {
            while(arr[k]==1)
            {
                k--;
                printf("%d",k);
            }
  swap(&arr[i], &arr[k]);
        }
    }
    return ;
}


void main()
{
    int arr[20]={0 ,1, 1, 0, 0 ,1, 1, 1, 0 ,0},i=0;
    //sortZeroOneBasic(arr,6);
    for(i=0;i<6;i++)
    {
      //  printf("%d",arr[i]);
    }
    printf("\n");
    //arr[20]={0,0,1,0,1,0,1};
    //sortZeroOneCount(arr,6);
    for(i=0;i<10;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
   // arr[20]={0,0,1,0,1,0,1};
    sortZeroOneOptimized(arr,10);
    for(i=0;i<10;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}
