#include<iostream>
using namespace std;

// int SortArray(int arr[], int n, int x)
// {
//     //int mid=n/2;
//     int left=0, right=n-1;
//     while(left<=right)
//     {
//         int mid=(left+right)/2;
//         if(x==arr[mid])
//             return mid;
//         else if(x<arr[mid])
//             right=mid-1;
//         else
//             left=mid+1;
//     }
//     if(left>right)
//         return -1;

// }


int SortArray_Recurssive(int arr[], int low, int high, int x)
{
    if(low>high)
        return -1;

    int mid=(low+high)/2;
    if(arr[mid]==x)
        return mid;
    if(x < arr[mid])
        return SortArray_Recurssive(arr,low,mid-1,x);
    else
         return SortArray_Recurssive(arr,mid+1,high,x);
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8};
   // int n=SortArray(arr, 8, 6);

   int n=SortArray_Recurssive(arr, 0, 7,7);

    if(n==-1)
        cout<<"Not Found"<<endl;
    else 
        cout<<"index found at; "<<n<<" ";

    return 0;
}