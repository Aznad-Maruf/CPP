#include<bits/stdc++.h>
using namespace std;

/*
multimap allows same key with different value.
*/

int main(){
    int a_i, b_i, n, temp;
    string st;
    multimap< string, int > mmp;
    cin>>n;
    while( n-- ){
        cin>>st>>temp;
        mmp.insert( make_pair( st, temp ) );
    }
        for( multimap < string, int > :: iterator it  = mmp.begin(); it != mmp.end(); it++ )
    cout<<it->first<<" " <<it->second<<endl;
}
