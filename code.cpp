#include<iostream>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
		freeopen("input.txt","r",stdin);
		freeopen("output.txt","w",stdout);
	#endif
		int n;
		cin>>n;
		cout<<n;
}