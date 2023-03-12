#include <iostream>

using namespace std;


int main () {
    long long cows = 0;
    long long totalMoney = -1;
    cin>>cows;
    long long tuition[cows];
    long long possibleTuition = 0;
    for(int i = 0; i < cows; ++i)
    {
        cin>>tuition[i];
    }
    long long max = 0;
    long long min = tuition[0];
    for(int k = 0; k < cows; ++k)
    {
        if(tuition[k] > max) {max = tuition[k];}
        if(tuition[k] < min) {min = tuition[k];}
    }
    
    long long newtotalCost = 0;
    
    while(newtotalCost > totalMoney && min <= max)
    {
        //cout<<"run"<<endl;
        totalMoney = newtotalCost;
        newtotalCost = 0;
        for(int m = 0; m < cows; ++m)
        {
            //cout<<min<<endl;
            if(min <= tuition[m])
            {
                newtotalCost += min;
            }
        }
        //cout<<"new total"<<newtotalCost<<endl;
        ++min;
    }
    
    cout<<totalMoney<<" "<<min-2;
    return 0;
}