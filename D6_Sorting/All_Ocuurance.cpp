#include<iostream>
using namespace std;

int last_Ocuurance(int arr[], int n, int x, int f, int l){

    int mid=(f+l)/2;
    if(f>l)
        return -1;
    if(x < arr[mid])
       return last_Ocuurance(arr,n, x, f, mid-1);
    else if(x > arr[mid])
       return last_Ocuurance(arr,n, x, mid+1, l);
    else{
        if(mid==n-1 || arr[mid+1]!=arr[mid])
            return mid;
        else
            return last_Ocuurance(arr,n, x, mid+1, l);
    }
}


int first_Ocuurance(int arr[], int n, int x, int f, int l){

    int mid=(f+l)/2;
    if(f>l)
        return -1;
    if(x < arr[mid])
       return first_Ocuurance(arr,n, x, f, mid-1);
    else if(x > arr[mid])
       return first_Ocuurance(arr,n, x, mid+1, l);
    else{
        if(mid==0 || arr[mid-1]!=arr[mid])
            return mid;
        else
            return first_Ocuurance(arr,n, x, f, mid-1);
    }
}



int countAllOcuurance(int arr[], int n, int x)
{
    int first=first_Ocuurance(arr,n,x,0, n-1 );
   // int last=last_Ocuurance(arr,n,x,0, n-1 );

   if(first==-1)
        return 0;
    else
        return last_Ocuurance(arr,n,x,0, n-1 )-first+1;

}

int main(){
    int arr[]={2,2,2,2,2,2};
   // cout<<countAllOcuurance(arr,6, 2);
   cout<<countAllOcuurance(arr,6, 2);
    return 0;
}