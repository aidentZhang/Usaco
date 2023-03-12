#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cstdio>
using namespace std;

int main () {
    
    ifstream infile ("infile.txt");
    ofstream outfile("outfile.txt");
    
    int cows = 0;
    int alone = 0;
    infile>>cows;
    char str[cows];
    for(int i = 0; i < cows; ++i)
    {
        infile>>str[i];
    }
    
    for(int k = 0; k < cows; ++k)
    {
        int numH = 0;
        int numG = 0;
        for(int m = 0; m < cows-k; ++m)
        {
            if(str[k+m] == 'H') {numH++;}
            else {numG++;}
            cout<<"numH: "<<numH<<endl;
            cout<<"numG: "<<numG<<endl;
            if(m > 2 && numG == 0 || numH == 0) {cout<<"added"<<endl; ++alone;}
            else if (m>2) {cout<<"added"<<endl; break;}
        }
    }
    cout<<alone;
    infile.close();
    return 0;
}