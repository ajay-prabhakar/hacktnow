#include <stdio.h>
int main ()
{
	
	int i,n;
	   scanf ("%d",&n);  
	int a[n],temp;
	  for (i=0;i<n;i++){
			if (a[i]>=a[i+1]){
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		  
		}
		for (i=0;i<n;i++){
			printf("%d",a[i]);
		}
		return 0;
	}
