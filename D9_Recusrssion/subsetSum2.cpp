#include<iostream>
#include<vector>
#include<string>
using namespace std;

// void combinationSum(int arr[], int n, vector<int>&vec, int index,)
// {
//     if(index==n)
//     {
//        //if(target==0)
//         {
//             for(auto &x:vec)
//                 cout<<x<<" ";
//              cout<<endl;
//         }
//         return;
//     }
//         vec.push_back(arr[index]);
//         combinationSum(arr, n, vec, index+1);
//         vec.pop_back();
//         combinationSum(arr, n, vec, index+1);
// }

void combinationSum(int arr[], int n, vector<int>&vec, int index)
{

        if(index==n)
            {
                if(vec.empty()==true)
                    cout<<"{}";
                for(auto &x:vec)
                    cout<<x<<" ";
                cout<<endl;
                 return;
            }

    for(int i=index;i<n;i++)
    {
        if(i>index && arr[i]==arr[i-1])
            combinationSum(arr, n, vec, i+1);
        // if(arr[i]>target)
        //     break;
            vec.push_back(arr[i]);
            combinationSum(arr, n, vec, i+1);
            vec.pop_back();
    }
    
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    int arr[]={1,2,2,2,3,3};
    vector<int>vec;
    //int target=3;
    combinationSum(arr, 6, vec, 0);
    // for(auto x:arr)
    //     cout<<x<<" ";
    
    return 0;

}