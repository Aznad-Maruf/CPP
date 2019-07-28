#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

/*
    declaring a vector with n element;
    vector<int>v(n); ( initialized with zeros )
    fill( v.begin(), v.end(), 5 ); // initializes with 5.

    Resize a declared vector ---------> v.resize(10);

    vector array of n elements
    vector<int>v[n];    here v[0],v[1].....v[n-1] all are vectors.

    v.empty() should be used instead of " v.size()==0 " to check if it's empty or not;
    v.empty() works in O(1).

    v.clear() ----> to clear the vector and it makes the vector empty.

    v1=v ---> to copy vector v to v1

    vector<string> names(10,"Who Knows!");  ----> initializes the vector of 10 elements with the given string;
    vector<double> v(15,2.223) -----> initializes the v of 15 elements with 2.223;

    vector<vector<int>> matrix(3,vector<int> (10,-1));  ----> initializes the 2d vector of 3 rows and 10 columns with -1;

    for(vector<int> x : matrix){            --------> goes through all the values of the vector.
        for(int a : x)cout<<a<<" ";
        cout<<endl;
    }

    passing a vector to a function ---->   vector<int> v;  /   void t(vector<int> & v) ;


    # find first occurrence of an element ->
        vector < int > :: iterator it;
        it = find(  v.begin(), v.end(), temp );
        cout<<it-v.begin()+1<<endl; // prints the index.

    # resize a 2d vector
    v.resize( n1, vector < int > ( n2 ) ) ;

    next_permutation(first_iterator, last_iterator) – This modified the vector to its next permutation.
    prev_permutation(first_iterator, last_iterator) – This modified the vector to its previous permutation.

    lower_bound returns an iterator pointing to the first element in the range [first,last)
     which has a value not less than ‘val’.
    upper_bound returns an iterator pointing to the first element in the range [first,last)
     which has a value greater than ‘val’.



*/

/*void testing(vector<vector<int>> & matrix){
    for(int a_i=0;a_i<matrix[1].size();a_i++)matrix[1][a_i]=-2;
}*/

int main(){
    /*vector<pair<string,int>> v(10,make_pair("None",20));
    vector<pair<string,int>> :: iterator it;
    for(it=v.begin();it<v.end();it++)cout<<it->second<<endl;
        */

        int a_i, b_i, n, temp;
        cin>>n;

        vector < vector < int > > v1;
        vector < int > v2;
        int v[10][10];
        fill( v, 2 );

        for( a_i=0; a_i<v2.size(); a_i++ ) cout<<v2[a_i]<<" ";
        cout<<endl;

        /*
        vector < int > v( n );
        fill( v.begin(), v.end(), 5 );
        for( int x : v ) cout<<x<<" ";
        cout<<endl;
        for( a_i=0; a_i<n; a_i++ ) cin>>v[a_i];
        cin>>temp;


        vector < int > :: iterator it;
        it = find(  v.begin(), v.end(), temp );
        cout<<it-v.begin()+1<<endl;
        */



}



















