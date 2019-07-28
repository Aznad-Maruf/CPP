#include<bits/stdc++.h>
using namespace std;

/***

    vector<int> :: iterator lower,upper;
    lower=lower_bound(v1.begin(),v1.end(),val);
    upper=upper_bound(v1.begin(),v1.end(),val);

lower_bound returns an iterator pointing to the first element in the range [first,last)
 which has a value not less than ‘val’.

upper_bound returns an iterator pointing to the first element in the range [first,last)
 which has a value greater than ‘val’.

 lower - v.begin() - gives the index of the last element that is less then val.
 upper - v.begin() - gives the index of the last element that is less than or equal to val.
***/


int main(){
    int a_i,b_i,n,val;
    cin>>n;
    vector<int> v1(n);
    for(a_i=0;a_i<n;a_i++)cin>>v1[a_i];
    cin>>val;
    sort(v1.begin(),v1.end());
    vector<int> :: iterator lower,upper;
    lower=lower_bound(v1.begin(),v1.end(),val);
    upper=upper_bound(v1.begin(),v1.end(),val);
    cout<<lower-v1.begin()<<endl<<upper-v1.begin()<<endl;
    main();
}
