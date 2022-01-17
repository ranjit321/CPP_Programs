#include<iostream>
using namespace std;

int partition(int arr[],int p,int r)
{
    int x=arr[r];
    int i=p-1;

    for(int j=i+1;j<r;j++)
    {
        if(arr[j]<x)
        {
            i++;
            swap(arr[i],arr[j]);
        }

    }
    swap(arr[i+1],arr[r]);
    return i+1;
}



void quickSort(int arr[],int p,int r)
{
 if(p<r)
 {
     int q=partition(arr,p,r);
    quickSort(arr,p,q-1);
    quickSort(arr,q+1,r);
 }
}

int main()
{
    int arr[]={12,10,8,6,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,n-1);
    cout<<"Sorted array is:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}