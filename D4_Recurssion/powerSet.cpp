#include<iostream>
#include<vector>
using namespace std;

void powerSet(int arr[], int n, vector<int>res, int index)
{
    if(index>=n)
        {
            for(auto x:res)
            {
                cout<<x<<" ";
            }
            cout<<endl;
            return;
        }

    // Include Case
    res.push_back(arr[index]);
    powerSet(arr,n,res,index+1);

    // Exclude case
    res.pop_back();
    powerSet(arr,n,res,index+1);
}

int main(){
    int arr[]={1,2,3};
    vector<int>res;
    int index=0;
    powerSet(arr,3,res,index);
    return 0;
}