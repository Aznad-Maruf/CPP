#include<bits/stdc++.h>
#include<set>
using namespace std;
/*

    ** Duplicates are avoided in set. it comes out as ascending order.

    .insert() -----> to insert an element into set.

    traversing set ------->
    set<int> s;
    .... ....
    for(auto x: s) cout<<x<<" ";
    or->
    for(set<int> :: iterator s_it=s.begin();s_it!=s.end();s_it++) cout<<*s_it<<" ";

    .erase(n)  -------> erase n from the set.

    s.size() --------> returns size.

    .find()------>     auto i=s.find(5);
    if(i!=s.end())cout<<"Got it"<<endl;

    making a vector/array from unsorted and repeated to sorted and unique. -------->

    int ara[5]={1,3,4,4,10};
    set<int> s(ara,ara+5);
    vector<int> v(s.begin(),s.end());

*/
int main(){
    int ara[5]={1,3,4,4,10};
    set<int> s(ara,ara+5);
    vector<int> v(s.begin(),s.end());
    for(auto x: v)cout<<x<<" ";
    cout<<endl;
}
