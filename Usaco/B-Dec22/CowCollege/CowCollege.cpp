#include <iostream>
#include <fstream>

#include <cstring>
#include <cstdio>

using namespace std;


int main () {
    
    ifstream infile ("infile.txt");
    ofstream outfile("outfile.txt");
    long long cows = 0;
    cin>>cows;
    long long tuition[cows];
    long long possibleTuition = 0;
    for(int i = 0; i < cows; ++i)
    {
        cin>>tuition[i];
        possibleTuition += tuition[i];
    }
    possibleTuition = possibleTuition/cows;
    long long max = 0;
    long long min = tuition[0];
    for(int k = 0; k < cows; ++k)
    {
        if(tuition[k] > max) {max = tuition[k];}
        if(tuition[k] < min) {min = tuition[k];}
    }
    long long totalMoney = 0;
    for(int m = 0; m < cows; ++m)
    {
        if(possibleTuition <= tuition[m])
        {
            totalMoney += possibleTuition;
        }
    }
    bool maxNotFound = true;
    long long nextTuition = 0;
    long long Higher = 0;
    long long Lower = 0;

    for(int m = 0; m < cows; ++m)
    {
        if(possibleTuition+1 <= tuition[m])
        {
            Higher += possibleTuition+1;
        }
    }
    
    for(int m = 0; m < cows; ++m)
    {
        if(possibleTuition-1 <= tuition[m])
        {
            Lower += possibleTuition-1;
        }
    }
    long long newLower = 0;
    long long tuitionforLower = possibleTuition-1;
    if(Lower > totalMoney)
    {
        while(newLower>Lower)
        {
            tuitionforLower -= 1;
            possibleTuition = tuitionforLower;
            totalMoney = newLower;
            for(int m = 0; m < cows; ++m)
            {
                if(tuitionforLower-1 <= tuition[m])
                {
                    newLower += tuitionforLower-1;
                }
            }
        }
    }
    long long newHigher = 0;
    long long tuitionforHigher = possibleTuition+1;
    if(Higher > totalMoney)
    {
        while(newHigher>Higher)
        {
            tuitionforHigher += 1;
            possibleTuition = tuitionforHigher;
            totalMoney = newHigher;
            for(int m = 0; m < cows; ++m)
            {
                if(tuitionforHigher+1 <= tuition[m])
                {
                    newHigher += tuitionforHigher+1;
                }
            }
        }
    }
    /*while(maxNotFound)
    {
        for(int a = 0; a < cows; ++a)
        {
            if(tuition[a] > possibleTuition)
        }
        possibleTuition = (max+possibleTuition)/2;
        for(int m = 0; m < cows; ++m)
        {
            if(possibleTuition <= tuition[m])
            {
                tempTotal += possibleTuition;
            }
        }
    }*/
    cout<<totalMoney<<" "<<possibleTuition;
    infile.close();
    return 0;
}