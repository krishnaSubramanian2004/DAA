#include<stdio.h>
int main(){
	int arr[5],n;
	
	int i,j;
	printf("enter the elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
int bubblesort(int arr[5],int n);
		int n=sizeof(arr)/sizeof arr[0];
		bubblesort(arr[],n);
		printf("the sorted array:");
		for(i=0;i<n;i++)
		printf("%d",&arr[i]);
	}
	return 0;

