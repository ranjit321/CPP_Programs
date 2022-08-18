/* Problem: Program to  Move all the negative elements to one side of the array */

#include <iostream>
using namespace std;

//using quicksotrt partition method
void rearrange(int arr[],int n)
{
int j=0;
for(int i=0;i<n;i++)
{
    if(arr[i]<0)
    {
        if(i!=j)
        {
            swap(arr[i],arr[j]);
        }
        j++;
    }
}
}
//using left and right pointer
void arrangeElements(int arr[],int n)
{
    int left=0,right=n-1;
    while(left<=right)
    {
        if(arr[left]>0 && arr[right]>0)
        {
            right--;
        }
        else if(arr[left]<0 && arr[right]>0)
        {
            left++;
            right--;
        } 
        else if(arr[left]>0 && arr[right]<0)
        {
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
        else{
            left++;
        }
    }
}
int main()
{
    int arr[]={-1,-2,5,10,-88,55};
    int n=sizeof(arr)/sizeof(arr[0]);
   // rearrange(arr,n);
    arrangeElements(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
