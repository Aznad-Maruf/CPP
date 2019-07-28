#include<bits/stdc++.h>
using namespace std;


/*
    pair<type1,type2> variableName;   ----> declaration.

    pair<int,string> id[10];
    for(int a_i=0;a_i<3;a_i++){
        cin>>id[a_i].first>>id[a_i].second;
    }

    vector of pairs ----->
    pair<string,int> p;
    vector<pair<string,int>> v;
    for(int a_i=1;a_i<=2;a_i++){
            cin>>p.first>>p.second;
            v.push_back(p);
    }
    cout<<v[1].first<<endl;

     make_pair ---->    pair<string,int> p;
     p=make_pair("Bin",99);

     use of  vector iterator ------->
     vector<pair<string,int>> v(10,make_pair("None",20));
    vector<pair<string,int>> :: iterator it;
    for(it=v.begin();it<v.end();it++)cout<<it->second<<endl;



*/
int main(){

    pair<string,int> p;
    vector<int> :: iterator i;
    p=make_pair("Bin",99);
    cout<<p.first<<" "<<p.second<<endl;



}
