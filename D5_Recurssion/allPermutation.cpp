#include<iostream>
#include<vector>
using namespace std;

void allPermutation(int arr[], int n, vector<int>&res, int index)
{
    if(index==n)
        {
            for(auto &x:res)
                cout<<x<<" ";
            cout<<endl;
            return;
        }

    for(int i=index;i<n;i++)
    {
        res.push_back(arr[i]);
        allPermutation(arr,3,res,i+1);
    }
}

int main(){
    int arr[]={1,2,3};
    vector<int>res;
    allPermutation(arr,3,res,0);
    return 0;
}