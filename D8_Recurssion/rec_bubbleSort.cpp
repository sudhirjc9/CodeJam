#include<iostream>
using namespace std;

void bubble_sort(int arr[], int n)
{
    if(n==1)
        return;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
            swap(arr[i], arr[i+1]);
    }
    bubble_sort(arr, n-1);
}


int main(){
    int arr[]={5,4,3,2,1};
    bubble_sort(arr, 5);
    for(auto x:arr)
        cout<<x<<" ";
    return 0;
}