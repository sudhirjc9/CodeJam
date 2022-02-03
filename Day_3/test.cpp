#include<iostream>
#include<vector>
using namespace std;

void SubSequence(int arr[], int n, vector<int>v, int index,int target)
{
    if(index==n){
    if(target==0){
    for(auto x:v)
        cout<<x<<" ";
    cout<<endl;
    return;
    }
    return;
    }

    if(arr[index]<=target){
    v.push_back(arr[index]);
    SubSequence(arr,n,v,index,target-arr[index]);
    }
   else{
    v.pop_back();
    SubSequence(arr,n,v,index+1,target);
   }


}

int main(){
    int arr[]={2,3,6,7};
    vector<int>v;
    int target=7;
    SubSequence(arr,4,v,0,target);
    return 0;
}