#include<iostream>
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;

int main () {
    
    ifstream infile ("infile.txt");
    ofstream outfile("outfile.txt");
    
    int numCows = 0;
    char str[numCows];
    infile>>numCows;
    infile>>str;
    int counter = 0;
    char startingCow = 'H';
    int answer  = 0;
    int amountofSameG = 0;
    bool lonelyG = true;
    int amountofSameH = 0;
    bool lonelyH = true;
    for(int i = 0; i < numCows-1; ++i)
    {
        counter = 2;
        cout<<endl<<str[i]<<endl;
        
        cout<<endl<<"This is time number "<<i<<endl;
        if(str[i] = 'H') {amountofSameH++; cout<<"H";}
        else {amountofSameG++; cout<<"G";}
        if(str[i+1] = 'H') {amountofSameH++; cout<<"H";}
        else {amountofSameG++; cout<<"G";}
        if(str[i+2] = 'H') {amountofSameH++; cout<<"H";}
        else {amountofSameG++; cout<<"G";}
        
        if(amountofSameG >= 2) {lonelyG = false;}
        if(amountofSameH >= 2) {lonelyH = false;}

        while(!lonelyG && !lonelyH || counter >= numCows)
        {
            if(str[i+counter] = 'H') {amountofSameH++;}
            else {amountofSameG++;}
            
            if(amountofSameG >= 2) {lonelyG = false;}
            if(amountofSameH >= 2) {lonelyH = false;}
            
            if(amountofSameG < 2 && amountofSameH < 2)
            {
                answer++;
            }
            ++counter;
        }
        
    }
    cout<<answer<<endl;
    infile.close();
    return 0;
}