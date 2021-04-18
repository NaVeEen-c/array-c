#include<stdio.h>
int main() {
	//code
	int t,i,j,a[100],n,p;
            printf("Enter the lenth of array\n");
	    scanf("%d",&n);//len
            printf("enter the index number to be sorted\n"); 
	    scanf("%d",&p);//index to be sorted
            printf("give the input to the array\n");
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);// input
	    }
	    for(j=0;j<n;j++)
	    {
	        for(i=0;i<n-j-1;i++)// bubble_sort
	        {
	            if((a[i]>a[i+1])&&(j!=p))
	            {
	                a[i]=a[i]+a[i+1];
	                a[i+1]=a[i]-a[i+1];
	                a[i]=a[i]-a[i+1];
	            }
	        }
	    }
            printf("the nearly sorted array for the given conditions is \n");
	    for(i=0;i<n;i++)
	    {
	        printf("%d ",a[i]);//out
	    }
	    printf("\n");  
	return 0;
}
