#include<iostream>
#include<math.h>
#include<string>
using namespace std;

void generateSubsets(string &s)
{
    int num=s.length();
    for(int i=0;i<pow(2,num);i++)
    {
        string res="";
        for(int j=0;j<s.size();j++)
        {
            if(i & (1<<j))
                res+=s[j];
        }
        cout<<res;
        cout<<endl;
    }
}

int main(){
    string s = "ab";
    generateSubsets(s);
    return 0;
}