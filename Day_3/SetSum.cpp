#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void setSum(int arr[], int n, vector<int>&vec, vector<int>&res, int index)
{
    if(index==n)
        {
            int s=0;
            for(auto &x:vec)
                s+=x;
            res.push_back(s);
            return;
        }

    vec.push_back(arr[index]);
    setSum(arr, n, vec, res, index+1);
    vec.pop_back();
    setSum(arr, n, vec, res, index+1);
}
int main(){
    int arr[]={1,2,3};
    vector<int>vec, res;
    int sum=0;
    int index=0;
    setSum(arr, 3, vec, res,  index);
    sort(res.begin(), res.end());
    for(auto &x: res)
        cout<<x<<" ";
    return 0;
}