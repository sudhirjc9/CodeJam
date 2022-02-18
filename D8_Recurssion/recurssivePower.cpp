#include<iostream>
using namespace std;
// Slow Methid
// int power(int n, int p)
// {
//     if(p==0)
//         return 1;
//     return n*power(n,p-1);
// }


// Fast Method

int power(int n, int p)
{
    if(p==0)
        return 1;
    int small_prob=power(n,p/2);
    small_prob*=small_prob;
    if(p & 1)
    {
        return small_prob * n;
    }
    return small_prob;
}


int main(){
    int n;
    cin>>n;

    int p;
    cin>>p;

    cout<<power(n,p);

    return 0;
}