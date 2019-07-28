
/**

#begin() – Returns an iterator to the first element in the map

#end() – Returns an iterator to the theoretical element that follows last element in the map

#size() – Returns the number of elements in the map

#max_size() – Returns the maximum number of elements that the map can hold

#empty() – Returns whether the map is empty

# insert -> mp.insert( make_pair( "Bd", 2 ) ); or mp["Aus"] = 5;

# unordered_map don't order the keys map does.

# erase element -> by key - mp.erase( "Aus" ); or by iterator - mp.erase( mp.begin() );

# removes all the element from the map -> mp.clear();

# find(const g) – Returns an iterator to the element with key value ‘g’
  in the map if found
  else returns the iterator to end

# count(const g) – Returns the number of matches to element with key value ‘g’ in the map

# iterate through the map ->
    map < string, int > :: iterator it;
    for( it = mp.begin(); it!= mp.end(); it++ ){
        cout<<it->first<<" "<<it->second<<endl;
    }



*/


#include<bits/stdc++.h>
#include<map>
using namespace std;

int main(){
    map < string, int > mp;

    mp.insert( make_pair( "Bd", 2 ) );
    mp["Aus"] = 5;
    mp["Den"] = 4;

    map < string, int > :: iterator it;

    for( it = mp.begin(); it!= mp.end(); it++ ){
        cout<<it->first<<" "<<it->second<<endl;
    }


}
