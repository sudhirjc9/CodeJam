#include<iostream>
#include<vector>
#include<string>
using namespace std;

void subSequence(int arr[],int n, int index, vector<int>&vec)
{
    if(index>=n)
    {
        for(auto &x:vec)
            cout<<x<<" ";
        cout<<endl;
        return;
    }
        vec.push_back(arr[index]);
        subSequence(arr,n,index+1,vec);
        vec.pop_back();
        subSequence(arr,n,index+1,vec);
}

// void subSequenceStr(string str, int index, string res){
//     if(index>str.size())
//         cout<<res<<endl;
//     for(int i=0;i<str.size();i++)
//         {
//             res+=str[i];
//             swap(str[index],str[i]);
//             subSequenceStr(str.substr(i+1),index+1,res);
//             swap(str[index],str[i]);
//         }
// }

int main(){
    int arr[]={3,1,2};
    vector<int>v;
    subSequence(arr,3,0,v);

    // cout<<"///////////////////////////////////"<<endl;
    // cout<<"subsequece of string"<<endl;
    // string str="ABC";
    // string res="";
    // subSequenceStr(str,0,res);
    return 0;
}