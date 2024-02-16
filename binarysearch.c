#include<stdio.h>
int binarysearch(int a[],int key,int low,int high){
	int mid;
	if(low<=high){
		mid=(low+high)/2;
		if(a[mid]==key){
			return 1;
		}
		else if(a[mid]<key){
			return binarysearch(a,key,low,mid-1);
		}
		else{
			return binarysearch(a,key,mid+1,high);
		}
	}
	return -1;	
}
int main(){
 int i,arr[10],key,n,low,high,result;
  low=0;
 printf("enter array size:");
 scanf("%d",&n);
  high=n;
 printf("\nenter array elements:\n");
 for(i=0;i<n;i++){
 	printf("element %d :",i+1);
 	scanf("%d",&arr[i]);
 }
 printf("enter key value:");
 scanf("%d",&key);
 result=binarysearch(arr,key,low,high);
 if(result!=-1){
 	printf("%d is found",key);
 }
 else{
 	printf("%d is not found",key);
 }

return 0;
 }
