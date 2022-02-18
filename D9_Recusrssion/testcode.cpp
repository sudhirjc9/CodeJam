#include<iostream>
#include<string>
using namespace std;

void print(int start, int end)
{
    if(start>end)
        return;

    print(start+1, end);
    cout<<start<<endl;
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n;
    cin>>n;
    print(1,n);
    
    return 0;

}