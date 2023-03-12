#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cstdio>
using namespace std;

int main () {
    
    ifstream infile ("infile.txt");
    ofstream outfile("outfile.txt");
    int numcows = 0;
    int answer = 0;
    infile>>numcows;
    int cowsPref[numcows];
    int cowsStart[numcows];
    for(int i = 0; i < numcows; ++i)
    {
        infile>>cowsPref[i];
    }
    for(int i = 0; i < numcows; ++i)
    {
        infile>>cowsStart[i];
    }
    bool notSame = true;
    
    int UnderorOver = 0;
    while(answer < 10)
    {
        for(int a = 0; a < numcows; ++a)
        {
            cout<<cowsStart[a]<<" ";
        }
        cout<<endl;
        notSame = false;
        for(int i = 0; i < numcows; ++i)
        {
            if(cowsPref[i] != cowsStart[i])
            {
                notSame = true;
            }
        }
        if(notSame == false) {break;}
        
        int longest = 0;
        int tempLongest = 1;
        int tempStartPos = 0;
        int startPos = 0;
        int minus = false;
        int finalminus = false;
        for(int k = 1; k < numcows; ++k)
        {   
            cout<<cowsStart[k-1]<<" "<<cowsPref[k-1]<<" | "<<cowsStart[k]<<" "<<cowsPref[k]<<endl;
            cout<<tempLongest<<endl;
            if(cowsStart[k-1] < cowsPref[k-1] && cowsStart[k] < cowsPref[k])
            {
                cout<<"start is below preffered"<<endl;
                ++tempLongest;
                minus = false;
            }
            else if (cowsStart[k-1] > cowsPref[k-1] && cowsStart[k] > cowsPref[k])
            {
                ++tempLongest;
                minus = true;
            }
            else
            {
                if(tempLongest >= longest) {longest = tempLongest; startPos = tempStartPos; finalminus = minus;}
                tempStartPos = k;
            }
        }
        if(tempLongest > longest) {longest = tempLongest; startPos = tempStartPos; finalminus = minus;}
        for(int m = 0; m < longest; ++m)
        {
            if(minus = true)
            {
                cowsStart[m+startPos] = cowsStart[m+startPos]+1;
            }
            else
            {
                cowsStart[m+startPos] = cowsStart[m+startPos]-1;
            }
        }
        ++answer;
        cout<<endl;
    }
    cout<<answer;
    infile.close();
    return 0;
}