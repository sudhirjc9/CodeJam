#include<iostream>
using namespace std;

int findSqareRoot(int num)
{
    int low=1, high=num;
    int ans;
    while(low<=high)
    {
        int mid =(low + high)/2;

        int mSq=mid * mid;
        if(mSq==num)
            return mid;
        if(mSq>num)
            high=mid-1;
        else
        {
            low=mid+1;
            ans=mid;
        }
    }
    return ans;
}

int main(){
    int x;
    cout<<"Enter the Number: "<<endl;
    cin>>x;
    cout<<"Square Root of "<<x<<" is "<<findSqareRoot(x)<<endl;
    return 0;
}