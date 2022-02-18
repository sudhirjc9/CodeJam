#include<iostream>
using namespace std;

// method 1

// int firstOcurrance(int arr[], int n, int num, int index)
// {
//     if(arr[index]==num)
//         return index ;
//     if(index==n)
//         return -1;
//    return  firstOcurrance(arr, n, num, index+1);
// }


// Method 2

int firstOcurrance(int arr[], int n, int num)
{
    if(n==0)
        return -1;
    if(arr[0]==num)
        return 0;
       
    int i= firstOcurrance(arr+1, n-1, num);
    if(i==-1)
        return -1;
    return i+1;
}


int main(){
    int arr[]={1,2,3,3,4,5,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int index=0;
    int num=15;
    //cout<<firstOcurrance(arr,n, num, index);
    cout<<firstOcurrance(arr, n, num)<<endl;
    return 0;
}