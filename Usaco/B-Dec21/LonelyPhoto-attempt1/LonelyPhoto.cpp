#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cstdio>
using namespace std;

int main () {
    
    ifstream infile ("infile.txt");
    ofstream outfile("outfile.txt");
    
    int numCows = 0;
    infile>>numCows;
    int cows[numCows];
    for(int i = 0; i < numCows; ++i)
    {
        infile>>cows[i];
    }
    
    
    infile.close();
    return 0;
}