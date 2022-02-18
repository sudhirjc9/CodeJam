#include<iostream>
using namespace std;

int* bubbleSort(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
 for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return arr;
}

int main()
{
  // int arr[]={6,1,8,2,10,4,12};
  int arr[7];
   for(int i=0;i<7;i++)
     cin>>arr[i];
    // for(auto x: arr)
    //     cout<<x<<" ";
    bubbleSort(arr,7);
        return 0;
}