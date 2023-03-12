#include <iostream>
#include <cstring>

using namespace std;

int main () {
    long long n = 0;
    long long k = 0;
    cin>>n;
    cin>>k;
    long long watch[n];
    long long answer = 0;
    for(long long i = 0; i < n; ++i)
    {
        cin>>watch[i];
    }
    answer += n*(k+1);
    for(long long a = 0; a < n-1; ++a)
    {
        //cout<<watch[a+1] - watch[a]<<endl;
        if(watch[a+1] - watch[a] <= k)
        {
            answer -= k;
            answer += watch[a+1]-watch[a]-1;
        }
    }
    cout<<answer;
    return 0;
}