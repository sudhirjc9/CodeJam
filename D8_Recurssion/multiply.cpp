#include<iostream>
using namespace std;

int multiply(int num1, int num2)
{
    if(num2==0)
        return 0;
    return num1+multiply(num1,num2-1);
}

int main(){
    int num1, num2;
    cin>>num1>>num2;
    cout<<multiply(num1,num2);
    return 0;
}