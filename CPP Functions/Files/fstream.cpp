/**
 fstream - header.
 ifstream - for input file stream.
 ofstream - for output file stram.
 exit(1) - to exit the program.
 while( !inFile2.eof() ) - read the file
 infile >> st; - get from infile to st ( works like cin )
 getline( inFile, st );- to get a string a line.
 outFile << st << endl; - st and a new lile will be added to the output file.

**/


#include<bits/stdc++.h>
#include<fstream>
using namespace std;

int main(){
    int a_i, b_i, n, temp;


    ifstream inFile, inFile2;
    inFile.open( "sampleInput.txt" );
    ofstream outFile;
    outFile.open( "sampleOutput.txt" );

    if( inFile.fail() ){
        cout<< "Can't Open File!" <<endl;
        exit(1);
    }

    string st;
    //getline( cin, st );
    while( !inFile.eof() ){
            getline( inFile, st );
        cout<<st<<endl;
        outFile << st <<endl;
    }



    //outFile << st

/*
    inFile >> n;
    inFile >> temp;
    inFile2.open( "sampleInput.txt" );
    cout<<n<<" "<<temp<<endl;
    while( !inFile2.eof() ){
        inFile2 >> temp;
        cout<<temp<<endl;
    }
*/

}
