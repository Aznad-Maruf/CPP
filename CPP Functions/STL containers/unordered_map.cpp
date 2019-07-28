#include<bits/stdc++.h>
using namespace std;

int main(){
    int a_i, b_i, n;
    string st;
    double temp;

    unordered_map < string, double > um ;

    um["Kuddus"] = 2;

    // if not in the map it gives null string / 0 .
    if(um["ii"] == 0 ) cout<<"Go"<<endl;

    // accessing the map value
    cout<<um["Kuddus"]<<endl;

    // inserting by insert function
    cin>>n;
    for( a_i=0; a_i< n; a_i++ ){
        cin>>st>>temp;
        um.insert( make_pair( st, temp ));
    }

    unordered_map < string, double > :: iterator x;

    for( x=um.begin(); x!=um.end(); x++ ){
        cout<<x->first<<" "<<x->second<<endl;
    }
    cout<<um.count("i")<<endl;


}
