#include <iostream>
#include <cstring>

using namespace std;

int main () {
    long long n = 0;
    cin>>n;
    long long t = 0;
    cin>>t;
    
    long long deliveries[t];
    memset(deliveries, 0, sizeof(deliveries));
    long long answer = 0;
    for(long long z = 0; z < n; ++z)
    {
        long long temp = 0;
        cin>>temp;
        cin>>deliveries[temp-1];
    }
    long long numBales = 0;
    for(long long k = 0; k < t; ++k)
    {
        
        numBales += deliveries[k];
        if(numBales > 0)
        {
            ++answer;
            numBales -= 1;
        }
    }
    cout<<answer<<endl;
}