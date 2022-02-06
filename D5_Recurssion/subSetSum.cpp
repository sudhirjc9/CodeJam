#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void subSetSum(int arr[], int n, int sum, int index,vector<int>&res)
{
    if(index==n)
    {
        res.push_back(sum);
        return;
    }

    sum+=arr[index];
   subSetSum(arr,3,sum,index+1,res);
   sum-=arr[index];
    subSetSum(arr,3,sum,index+1,res);
}

int main(){
    int arr[]={3,2,1};
    vector<int>res;
    int sum=0, index=0;
   // sort(arr,arr+3);
    subSetSum(arr,3,sum,index,res);
    sort(res.begin(),res.end());
    for(auto &x:res)
        cout<<x<<" ";

    return 0;
}