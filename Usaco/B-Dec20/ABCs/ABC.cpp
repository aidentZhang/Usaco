#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main () {
    long long arr[7];
    long long a = 10000000000;
    long long b = 10000000000;
    long long sum = -1;
    long long c = -1;
    int aPos = 0;
    for(int i = 0; i < 7; ++i)
    {
        cin>>arr[i];
        if(arr[i] > sum)
        {
            sum = arr[i];
        }
        if(arr[i] < a)
        {
            a = arr[i];
            aPos = i;
        }
    }
    arr[aPos] = 100000000000;
    for(int i = 0; i < 7; ++i)
    {
        if(arr[i] < b)
        {
            b = arr[i];
        }
    }
    
    c = sum - a - b;
    
    cout<<a<<" "<<b<<" "<<c<<endl;
    
}