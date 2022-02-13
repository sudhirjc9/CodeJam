// arr [1,2,2,3,4,4]

#include<iostream>
#include<unordered_map>
using namespace std;

void PrintRepeating(int arr[], int n)
{
    int x[100]={0};
    for(int i=0;i<n;i++)
        x[arr[i]]++;
    for(int i=0;i<100;i++)
        {
            if(x[i]>1)
                cout<<i<<" ";
        }
}


void PrintRepeating_(int arr[], int n)
{
    unordered_map<int, int>um;
    for(int i=0;i<n;i++)
        um[arr[i]]++;
    
    for(auto it=um.begin();it!=um.end();it++)
    {
        if(it->second >1)
            cout<<it->first<<" ";
    }
}

int main()
{
    int arr[]={1,2,2,3,4,4};
    PrintRepeating_(arr,6);
}