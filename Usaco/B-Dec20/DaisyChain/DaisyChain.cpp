#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cstdio>
using namespace std;

int main () {
    int flowers = 0;
    cin>>flowers;
    int arr[flowers];
    int answer = 0;
    for(int i = 0; i < flowers; ++i)
    {
        cin>>arr[i];
    }
    for(int l = 0; l < flowers; ++l)
    {
        double avg = 0;
        for(int q = l; q < flowers; ++q)
        {
            avg += arr[q];
            //cout<<avg<<" "<<q-l+1<<endl;
            double tempavg = avg/(q-l+1);
            //cout<<"tempAvg "<<tempavg<<endl;
            for(int b = l; b <= q; ++b)
            {
                if(arr[b] == tempavg)
                {
                    //cout<<"plussed"<<endl;
                    ++answer;
                    break;
                }
            }
        }
        
    }

    cout<<answer<<endl;
    return 0;
}