#include<iostream>
#include<vector>
using namespace std;

void allpermute(int arr[], int n, int index, vector<int>&res)
{

    if(index==n)
        {
            for(int i=0;i<n;i++)
                cout<<arr[i]<<" ";
            cout<<endl;
            return;
        }

for(int i=index; i<n;i++)
    {
        if(i>index && arr[i]==arr[i-1])
            break;
        swap(arr[i], arr[index]);
        allpermute(arr,3,index+1,res);
        swap(arr[i], arr[index]);

    }
}

int main(){
    int arr[]={1,2,2};
    vector<int>res;

    allpermute(arr,3,0,res);
    return 0;
}