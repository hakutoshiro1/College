#include<bits/stdc++.h>
using namespace std;
void sorter(int *arr, int size) 
{
   sort(arr,arr+size);
}
void inserter(int *arr,int size,int position,int value)
{
   for(int i=size-1;i>=position;i--)
   {  
      arr[i]=arr[i-1];
   }
   arr[position-1]=value;
}
void deleter(int *arr,int size,int position)
{
   for(int i=position;i<size;i++)
   {
      arr[i]=arr[i+1];
   }
}
int main() 
{
   cout<<"Enter number of elements : ";
   int size;
   cin>>size;
   int arr[100]={0};
   cout<<"Enter array elements: ";
   for(int i=0;i<size;i++)
   {
      cin>>arr[i];
   }
   sorter(arr, size);
   cout<<"Sorted array:";
   for(int i=0;i<size;i++)
   {
      cout<<arr[i]<<" ";
   }
   cout<<endl;
   size++;
   int position,value;
   cout<<"Enter Value and its position:"<<endl;
   cin>>value>>position;
   inserter(arr,size,position,value);
   for(int i=0;i<size;i++){
      cout<<arr[i]<<" ";
   }
   cout<<endl;
   cout<<"After sorting:";
   sorter(arr,size);
   for(int i=0;i<size;i++){
      cout<<arr[i]<<" ";
   }
   cout<<endl;
   cout<<"Enter Value:"<<endl;
   cin>>value;
   deleter(arr,size,value);
   size--;
   for(int i=0;i<size;i++){
      cout<<arr[i]<<" ";
   }

   return 0;
}
