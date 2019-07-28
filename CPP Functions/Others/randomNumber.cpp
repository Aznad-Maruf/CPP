/*
The rand function takes no arguments and returns an integer that is a pseudo-random number between
0 and RAND_MAX. On transformer, RAND_MAX is 2147483647.
#include <cstdlib>
int rand();

If we want to get a different sequence of numbers for each execution, we need to go through a process
of randomizing. Randomizing is “seeding” the random number sequence, so we start in a different
place. The function that does this is srand() which takes an integer as the seed:
void srand(int seed);
*/

#include<bits/stdc++.h>
using namespace std;

vector < int > v;

int main(){
    int a_i, b_i, n, temp, maxi = 1000000, limit = 6;

    v.resize( 7, 0 );

    srand( time(0) );

    for( a_i=0; a_i<=maxi; a_i++ ){
        temp = rand()% 6;
        if( temp == 0 ) temp = 6;

        v[temp] ++;

    }

    for( a_i=1; a_i<=limit; a_i++ ){
        cout<<a_i <<" ---- > "<< v[a_i]<<" -- > "<<(double)100.0*v[a_i]/maxi<<"%"<<endl;
    }



}
