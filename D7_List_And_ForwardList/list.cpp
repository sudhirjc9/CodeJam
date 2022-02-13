#include<iostream>
#include<forward_list>
using namespace std;

int JosephusProblem(forward_list<int>&ll, int k)
{
    auto it=ll.begin();
    // for(auto x:ll)
    //     cout<<x<<" ";
    // cout<<endl;
    while(ll.empty()==false)
    {
        //cout<<"Print";
        int len=k-2;
        while(len--){
            it++;
            if(it==ll.end())
                it=ll.begin();
        }
        it=ll.erase_after(it);
        if(it==ll.end())
            it=ll.begin();
        auto temp=it;
        temp++;
        if(temp==ll.end())
            break;
    }
    return *it;
}

int main(){
//     list<int>ll({2,3,4,5});
//     for(auto x:ll)
//         cout<<x<<" ";
//     cout<<endl;
//     ll.insert(ll.begin(),{1,1,1});
//     for(auto x:ll)
//         cout<<x<<" ";
//     cout<<endl;

//   //  ll.unique();
//     // for(auto x:ll)
//     //     cout<<x<<" ";
//     // cout<<endl;

//     ll.remove(1);
//     for(auto x:ll)
//         cout<<x<<" ";
//     cout<<endl;

forward_list<int>ll({0,1,2,3,4,5,6});
cout<<JosephusProblem(ll,3);
    return 0;
}