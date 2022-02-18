#include<iostream>
#include<string>
using namespace std;

void reverseArray(int arr[], int n, int i)
{
    if(i>=n/2)
        return;

    swap(arr[i],arr[n-1-i]);
    reverseArray(arr,n, i+1);
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    int arr[]={1,2,3,4,5};
    reverseArray(arr,5,0);
    for(auto x:arr)
        cout<<x<<" ";
    
    return 0;

}