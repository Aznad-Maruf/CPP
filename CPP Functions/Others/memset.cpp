#include<bits/stdc++.h>
using namespace std;

/*
    memset only works for -1 and 0.
    it can be 1d, 2d, 3d ... no matter what.
*/

#define popc( n ) __builtin_popcount( n )

int arr[10][10][10];

void print( int n ){
    int a_i, b_i;
    for( a_i=0; a_i<n; a_i++ ){
        for( b_i=0; b_i<n; b_i++ ) cout<<arr[a_i][b_i][0];
        cout<<endl;
    }

}

int main(){
    int a_i, b_i, n;
    cin>>n;
    memset( arr, -1, sizeof( arr ) );
    print( n );
}

