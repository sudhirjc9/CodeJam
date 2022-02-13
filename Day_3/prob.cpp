///  Array 5 elements [1,2,1,3,4];
#include<iostream>
#include<unordered_map>
using namespace std;

int RepeatingCount(int arr[], int n)
{
    unordered_map<int, int>um;
    for(int i=0;i<n;i++)
        um[arr[i]]++;

    for(auto it=um.begin();it!=um.end();it++)
        {
            if(it->second!=1)
                return it->second;
        }
}

int main()
{
    int arr[]={1,2,1,3,4};

    cout<<RepeatingCount(arr,5);
}