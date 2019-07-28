#include<bits/stdc++.h>
using namespace std;

void printList( list < int > &lst ){
    list < int > :: iterator it, it2;

    // print
    for( it = lst.begin(); it!=lst.end(); it++ ) cout<<*it<<" "; cout<<endl;
    // reveres order print
    for( auto it = lst.rbegin(); it!=lst.rend(); it++ ) cout<<*it<<" "; cout<<endl;

    // alternative way for reverse order print
    it = lst.end(); it--; it2 = lst.begin(); it2--;
    for( ; it!=it2; it-- ) cout<<*it<<" "; cout<<endl;

}

int main(){
    int a_i, b_i, n, temp;

    list < int > lst1, lst2;

    lst1.push_back( 2 );
    lst1.push_back( 3 );
    lst1.push_front( 1 );
    lst1.push_front( 2 );

    lst2 = lst1;

    // remove element by value o(n)
    lst1.remove( 2 );

    printList( lst1 );

}
