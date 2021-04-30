#include<stdio.h>
int main() {
    int arr[100000];
    int i,N,D,T;

     printf("enter array size\n");
     scanf("%d",&N);
     printf("enter the index where it should be rotate\n");
     scanf("%d",&D);
     printf("enter array values\n");
    
     for(i=0;i<N;i++)
     {
         scanf("%d",&arr[i]);//taking array values one by one
     }
     for(i=D;i<N;i++)
     {
          printf("%d ",arr[i]);//printing the array after  taken idex 
        
     }
     for(i=0;i<D;i++)
     {
          printf("%d ",arr[i]);//printig the array before givven index
        
     }
     printf("\n");
    
	//code
	return 0;
}
