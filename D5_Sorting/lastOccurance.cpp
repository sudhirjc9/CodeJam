#include<iostream>
using namespace std;

int firstOcuurance(int arr[], int n, int left, int right, int x)
{
        int mid=(left+right)/2;
        if(left>right)
            return -1;


        if(x < arr[mid])
            return firstOcuurance(arr, n, left, mid-1, x);
        else if(x> arr[mid])
            return firstOcuurance(arr, n, mid+1, right, x);
        else{
                    //         if(arr[mid]==x)
        {
           // return firstOcuurance(arr, n, left, mid-1, x);
        //    while(arr[mid]==x)
        //         mid--;
        //     return mid+1;
        if(mid==n-1|| arr[mid+1]!=arr[mid])
            return mid;
        else    
            return firstOcuurance(arr, n, mid+1, right, x);
        }
        }
}

int main(){
    int arr[]={1,2,2,2,3,4};
    cout<<firstOcuurance(arr,6,0,5, 2);
    return 0;
}