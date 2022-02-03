#include<iostream>
#include<vector>
using namespace std;

void combinationSum(vector<int>arr, vector<int>&res, int index, int target)
{
    if(index>=arr.size())
        {
            if(target==0)
                {
                    for(auto x: res)
                        cout<<x<<" ";
                    cout<<endl;
                    return;
                }
            return;
        }
    if(arr[index]<=target)
    {
        res.push_back(arr[index]);
        combinationSum(arr,res,index,target-arr[index]);
        res.pop_back();
    }
    combinationSum(arr,res,index+1,target);
}

int main(){
    vector<int>arr={2,3,6,7};
    int target=7;
    vector<int>res;
    int index=0;
    combinationSum(arr,res,index, target);
    return 0;
}