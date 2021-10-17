#include<stdio.h>
int binarysearch(int arr[],int size,int element)
{
int low,mid,high;
low=0;
high=(size-1);
//start searching
while(low<=high)
{
mid=(low+high)/2;
if(arr[mid]==element)
return mid;    
if(arr[mid]<element)
low=mid+1;    
else
high=mid-1;
}
//searching ends
return -1;
}
int linearsearch(int arr[],int size,int element)
{
int i;
for(i=0;i<size;i++)   
{
if(arr[i]==element) 
return i;  
} 
return -1;
}
int main()
{
    // linear search will work with sorted and unsorted arrays both
/*int arr1[]={2,31,45,89,54,89},index;
int numberofele=sizeof(arr1)/sizeof(int);
int element;
printf("enter the element to search:");
scanf("%d",&element);
index=linearsearch(arr1,numberofele,element);
if(index==(-1))
printf("not found");
else
printf("we found %d in index %d",element,index);*/
// binary search will only with sorted array
int arr[]={1,2,3,12,14,16,27,90};//sorted array
int element,sizeofarr,index;
sizeofarr=sizeof(arr)/sizeof(int);
printf("enter the element to search:");
scanf("%d",&element);
index=binarysearch(arr,sizeofarr,element);
if(index==(-1))
printf("not found");
else
printf("we found %d in index %d",element,index);
return 0;
}