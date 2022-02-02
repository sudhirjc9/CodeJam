#include<iostream>
#include<string>
using namespace std;

void subSequence(string s,int index, string res,int size)
{
    if(index==size)
        {
            cout<<res<<endl;
            return;
        }
    res+=s[index];
    subSequence(s.substr(index+1),index+1,res,size);
    res+="";
    subSequence(s.substr(index+1),index+1,res,size);
}

int main(){
    int index=0;
    string str="abcd";
    int size=str.size();
    string res="";
    subSequence(str,index,res,size);
    return 0;
}