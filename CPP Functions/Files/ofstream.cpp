#include<bits/stdc++.h>
using namespace std;

void files(){
    ofstream of1;

    of1.open("fau.txt");

    int a = 10;

    for( int a_i = 0; a_i<=a; a_i++ ) of1<<a_i<<" ";

    of1<<endl;

    of1<<"End of the text"<<endl;

    of1.close();
}

int main(){
    int a_i, b_i, n;
    files();
}
