#include<iostream>
#include<vector>
#include<string>
using namespace std;

void subSequence(int arr[],int n, int index, vector<int>&vec, int &Sum, int &curr_sum)
{
    if(index>=n)
    {
        if(curr_sum==Sum){
        for(auto &x:vec)
            cout<<x<<" ";
        cout<<endl;
        return;
        }
        else
            return;

    }
        vec.push_back(arr[index]);
        curr_sum+=arr[index];
        subSequence(arr,n,index+1,vec,Sum,curr_sum);
        curr_sum-=arr[index];
        vec.pop_back();
        subSequence(arr,n,index+1,vec,Sum,curr_sum);
}

int subSequenceCount(int arr[],int n, int index, vector<int>&vec, int &Sum, int &curr_sum)
{
    if(index>=n)
    {
        if(curr_sum==Sum){
        return 1;
        }
        else
            return 0;

    }
        vec.push_back(arr[index]);
        curr_sum+=arr[index];   
        int l=subSequenceCount(arr,n,index+1,vec,Sum,curr_sum);
        curr_sum-=arr[index];
        vec.pop_back();
        int r=subSequenceCount(arr,n,index+1,vec,Sum,curr_sum);
        return l+r;
}

int main(){
    int arr[]={3,1,2,4,2,6};
    int Sum=6, curr_sum=0;
    vector<int>v;
    subSequence(arr,6,0,v,Sum,curr_sum);

    cout<<"////////////////////////////////////"<<endl;
    cout<<"Count of subSequences with givn sum"<<endl;
    cout<<subSequenceCount(arr,6,0,v,Sum,curr_sum);

} 