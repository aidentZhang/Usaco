#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

int main () {
    
    ifstream infile ("paint.in");
    ofstream outfile("paint.out");
    
    int J_Lower, J_Higher, B_Lower, B_Higher, answer = 0;
    infile>>J_Lower;
    infile>>J_Higher;
    infile>>B_Lower;
    infile>>B_Higher;
    
    int number[4];
    
    
    if(J_Higher > B_Higher)
    {
        number[0] = B_Lower;
        number[1] = B_Higher;
        number[2] = J_Lower;
        number[3] = J_Higher;
    }
    else
    {
        number[0] = J_Lower;
        number[1] = J_Higher;
        number[2] = B_Lower;
        number[3] = B_Higher;
    }
    
    
    
    if(number[1] < number [2])
    {
        answer -= abs(number[1]-number[2]);
    }
    
    sort(number, number + sizeof(number)/sizeof(number[0]));
    answer += number[3]-number[0];
    outfile<<answer;
    outfile.close();
    infile.close();
}