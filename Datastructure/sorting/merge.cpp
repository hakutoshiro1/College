#include <bits/stdc++.h>
using namespace std;
void merge(int arr[],int const begin,int const mid,int const end)
{
    // int *p=arr;
    auto size1=mid-begin+1,size2=end-mid;
    int i=0,j=0,indexmerge=begin;
    int *leftarray=new int[size1],*rightarray=new int[size2];
    for(int ii=0;ii<size1;ii++)
    leftarray[ii]=arr[begin +ii];
    for(int jj=0;jj<size2;jj++)
    rightarray[jj]=arr[mid+1+jj];
    while(i<size1&&j<size2)
    {
        if(leftarray[i]<=rightarray[j])
        {
            arr[indexmerge]=leftarray[i];
            i++;
        }
        else
        {
            arr[indexmerge]=rightarray[j];
            j++;
        }
        indexmerge++;
    }
    while (i<size1)
    {
        arr[indexmerge]=leftarray[i];
        i++;
        indexmerge++;
    }
    while (j<size2)
    {
        arr[indexmerge]=rightarray[j];
        j++;
        indexmerge++;
    }
    // return arr;
}
void  mergesort(int arr[],int const begin ,int const end )
{
    // int *p=arr;
    if(begin>=end)return ;
    auto mid =begin+(end-begin)/2;
    mergesort( arr,begin,mid);
    mergesort( arr,mid +1,end);
    merge( arr,begin,mid,end);
    // return arr;
}
int main()
{
    int n,*p;
    cin>>n;
    int arr[5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        // cout<<p<<" ";
        // p++;
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}