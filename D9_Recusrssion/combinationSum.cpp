#include<iostream>
#include<vector>
#include<string>
using namespace std;

// void combinationSum(int arr[], int n, vector<int>&vec, int index, int target)
// {
//     if(index==n)
//     {
//         if(target==0)
//         {
//             for(auto &x:vec)
//                 cout<<x<<" ";
//              cout<<endl;
//         }
//         return;
//     }
//     if(arr[index]<=target){
//         vec.push_back(arr[index]);
//         combinationSum(arr, n, vec, index, target-arr[index]);
//         vec.pop_back();
//     }
//     combinationSum(arr, n, vec, index+1, target);
// }

void combinationSum(int arr[], int n, vector<int>&vec, int index, int target)
{

        if(target==0)
            {
                for(auto &x:vec)
                    cout<<x<<" ";
                cout<<endl;
                 return;
            }

    for(int i=index;i<n;i++)
    {
        if(i>index && arr[i]==arr[i-1])
            continue;
        if(arr[i]>target)
            break;
            vec.push_back(arr[i]);
            combinationSum(arr, n, vec, i+1, target-arr[i]);
            vec.pop_back();
    }
    
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    int arr[]={1,1,1,2,2};
    vector<int>vec;
    int target=3;
    combinationSum(arr, 5, vec, 0, target);
    // for(auto x:arr)
    //     cout<<x<<" ";
    
    return 0;

}