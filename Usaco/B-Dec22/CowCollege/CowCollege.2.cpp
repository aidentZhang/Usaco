#include <iostream>

using namespace std;


int main () {
    long long cows = 0;
    long long totalMoney = 0;
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
    //cout<<min<<" "<<max<<endl;
    long long newtotalCost = 0;
    long long tuitionAmount = 0;
    while(min <= max)
    {
        //cout<<"run"<<endl;
        //cout<<newtotalCost<<" "<<totalMoney<<endl;
        
        if(newtotalCost>totalMoney)
        {
            totalMoney = newtotalCost;
            tuitionAmount = min-1;
        }
        newtotalCost = 0;
        //cout<<"min "<<min<<endl;
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
    
    cout<<totalMoney<<" "<<tuitionAmount;
    return 0;
}