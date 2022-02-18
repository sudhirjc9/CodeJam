#include<iostream>
#include<vector>
using namespace std;


void printAllSubsequence(int arr[], int n, int sum, int s, vector<int>&vec, int index)
{
    if(index==n){
        if(s==sum)
        {
            for(auto &x:vec)
                cout<<x<<" ";
            cout<<endl;
        }
        return ;
    }

    
        vec.push_back(arr[index]);
        s+=arr[index];
        printAllSubsequence(arr, n, sum, s, vec, index+1);
        s-=arr[index];
        vec.pop_back();
        printAllSubsequence(arr, n, sum, s, vec, index+1);

}

int main(){
    int arr[]={1,2,1};
    int sum=2, s=0;
    vector<int>vec;
    printAllSubsequence(arr, 3, sum, s, vec, 0);
    return 0;
}