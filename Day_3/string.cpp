#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cin>>str;

    int first=0, last=str.size()-1;
    while(first<last)
    {
        swap(str[first],str[last]);
        first++;
        last--;
    }

    cout<<str;
}