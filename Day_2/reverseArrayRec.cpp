#include<iostream>
#include<string>
#define SPACE cout<<endl;
using namespace std;

bool palindrome(string str, int i)
{
    if(i>=str.size()/2)
        return true;
    if(str[i]!=str[str.size()-1-i])
        return false;
   return palindrome(str,i+1);
}

void reverseArr(int arr[],int l, int r)
{
    if(l>=r)
        return;

    swap(arr[l],arr[r]);
    reverseArr(arr,l+1,r-1);
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};

    cout<<"Original Array: "<<endl;
    for(auto x:arr)
        cout<<x<<" ";
reverseArr(arr,0,9);
cout<<endl;
    cout<<"Reversed Array: "<<endl;
    for(auto x:arr)
        cout<<x<<" ";
    
SPACE
cout<<"--------------------------------"<<endl;
cout<<"check if string is palindrome"<<endl;

string str="madam";
cout<<palindrome(str,0);
    return 0;
}