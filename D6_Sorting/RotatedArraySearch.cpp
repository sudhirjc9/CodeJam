#include<iostream>
using namespace std;

int findIndex(int arr[], int n, int num)
{
    int left=0, right=n-1;
    while(left<=right)
    {
        int mid = (left + right)/2;
        if(arr[mid] == num)
            return mid;
        if(arr[left] < arr[mid])
            {
                if(num >=arr[left] && num < arr[mid])
                    right = mid - 1;
                else
                    left = mid + 1;
            }
        else 
            {
                if(num > arr[mid] && num <= arr[right])
                    left = mid - 1;
                else
                    right = mid + 1; 
             }
    }
    return -1;
}

int main(){
    int arr[]={100,500,10,20,30,40,50};
    int index=findIndex(arr, 7, 50);
    cout<<index<<endl;
    return 0;
}