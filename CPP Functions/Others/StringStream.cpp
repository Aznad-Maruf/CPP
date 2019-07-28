/*
clear() — to clear the stream
str() — to get and set string object whose content is present in stream.
operator << — add a string to the stringstream object.
operator >> — read something from the stringstream object,
*/



#include<bits/stdc++.h>
using namespace std;

// Function to break a string to words
void breakString( string st ){
    stringstream ss( st );
    while( ss >> st ){
        cout<<st<<endl;
    }
}

int main(){
    int a_i, b_i, n, temp, n1, n2;

    ///DataType conversion
    /*

    cin>>n1>>n2;
    stringstream ss;
    ss<<n1; // n1 is added to ss
    ss<<n2; // n2 is added
    string st = ss.str(); // getting what's in stringstream
    cout<<st<<endl;

    ss.str(""); // clearing the ss to reuse

    ss << st; // adding st to ss
    ss >> n1; // adding ss to n1 as int
    cout<<n1<<endl;

    */
    /// Breaking a string into words
/*
    string st;
    getline( cin, st );
    breakString( st );
*/


}
