#include<stdio.h>
int main() {
	//code
	int i,j,n,k;
	int a[1000000];
	
	    printf("enter the array size\n");
	    scanf("%d",&n);
            printf("enter the value of k\n"); 
	    scanf("%d",&k);
            printf("give the input to the array\n"); 
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    for(i=0;i<k;i++)  //we comparing i with  k because we want last k elements in array
	    {
	        for(j=0;j<(n-i-1);j++) //soting the values using bubble sort algorithm
	        {
	            if(a[j]>=a[j+1]) 
	            {
	                a[j]=a[j]+a[j+1];
	                a[j+1]=a[j]-a[j+1];
	                a[j]=a[j]-a[j+1];
	            }
	            
	        }
	        printf("%d ",a[j]); // printing last bubbled element 
	    }
	    printf("\n");
	
	
	return 0;
}
