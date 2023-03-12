#include <iostream>
#include <cstring>

using namespace std;

int main () {
    long long n = 0;
    cin>>n;
    long long t = 0;
    cin>>t;
    
    long long deliveries[n+1];
    long long day[n+1];
    long long answer = 0;
    day[n] = t+1;
    deliveries[n] = 0;
    for(long long z = 0; z < n; ++z)
    {
        cin>>day[z];
        cin>>deliveries[z];
    }
    long long haybales = 0;
    //cout<<endl;
    for(int i = 0; i < n; ++i)
    {
        //cout<<"answer "<<answer<<endl;
        haybales += deliveries[i];
        //cout<<day[i]<<" "<<day[i+1]<<endl;
        //cout<<"haybales "<<haybales<<endl;
        //cout<<day[i+1]-day[i]<<endl;
        if(day[i+1]-day[i] <= haybales)
        {
            answer += day[i+1]-day[i];
            haybales -= day[i+1]-day[i];
        }
        else
        {
            answer += haybales;
            haybales = 0;
            
        }
    }
    cout<<answer<<endl;
}