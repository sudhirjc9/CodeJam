#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}

int main()
{
    int arr[]={6,1,8,2,10,4,12};
    bubbleSort(arr,7);
    for(auto x: arr)
        cout<<x<<" ";
}