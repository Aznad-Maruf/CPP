/**

Given a word, find lexicographically greater permutation of it.
 For example, lexicographically next permutation of “gfg” is “ggf”
  and next permutation of “acb” is “bac”.

**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a_i, b_i, n, temp;
    string st;
    vector < int > v( 3 );
    st = "abc";
    for( a_i=0; a_i<3; a_i++ )v[a_i] = a_i+1;

    do{
        cout<<st<<endl;
    }while( next_permutation( st.begin(), st.end() ) );

    cout<<endl;
    do{
        for( a_i=0; a_i<3; a_i++ ) cout<<v[a_i]<<" "; cout<<endl;
    }while( next_permutation( v.begin(), v.end() ) );

}
