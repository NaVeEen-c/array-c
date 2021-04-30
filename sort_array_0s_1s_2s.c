#include <stdio.h>

void sort012(int a[], int n)
{
  int i,j,p=0;
  int b[n];
  for(i=0;i<3;i++)
  {
      for(j=0;j<n;j++)
      {
          if(a[j]==i)  //checking 0s 1s and 2s in array
          {
              b[p]=i;   // if 0,1,2s are detected they stored in temp array
              p++;
          }
      }
  }
  printf("sorted array is\n");
  for(i=0;i<n;i++)
  {
      a[i]=b[i];//assigning temp array values to givven array
  }
  
}


int main() {
        int n,i;
        printf("enter the size of array\n");
        scanf("%d", &n);

        int arr[n];
        printf("give input to the array only the numbers 0,1 and 2\n"); 
        for(i=0;i<n;i++)
        {
            scanf("%d", &arr[i]);
        }

        sort012(arr, n);   // calling sort012 function and passing arguments array and integer

        for (i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    
    return 0;
}
  // } Driver Code Ends
