#include <iostream>
#include <cstring>
using namespace std;

int main () {
    
    int k = 0;
    cin>>k;
    char stamp[k][k];
    for(int a = 0; a < k; ++a)
    {
        for(int b = 0; b < k; ++b)
        {
            cin>>stamp[b][a];
        }
    }
    
    char stamp90[k][k];
    int c = 0;
    int d = 0;
    for(int a = k-1; a > -1; --a)
    {
        d = 0;
        for(int b = 0; b < k; ++b)
        {
            cout<<"a,b "<<a+1<<b+1<<" d,c "<<d+1<<c+1<<endl;
            stamp90[a][b] = stamp[d][c];
            ++d;
        }
        ++c;
    }
    
    char stamp180[k][k];
    c = 0;
    d = 0;
    for(int a = k-1; a > -1; --a)
    {
        d = 0;
        for(int b = 0; b < k; ++b)
        {
            cout<<"a,b "<<a+1<<b+1<<" d,c "<<d+1<<c+1<<endl;
            stamp180[a][b] = stamp90[d][c];
            ++d;
        }
        ++c;
    }
    
    char stamp270[k][k];
    c = 0;
    d = 0;
    for(int a = k-1; a > -1; --a)
    {
        d = 0;
        for(int b = 0; b < k; ++b)
        {
            cout<<"a,b "<<a+1<<b+1<<" d,c "<<d+1<<c+1<<endl;
            stamp270[a][b] = stamp180[d][c];
            ++d;
        }
        ++c;
    }
    
    cout<<endl;
    for(int a = 0; a < k; ++a)
    {
        for(int b = 0; b < k; ++b)
        {
            cout<<stamp[b][a];
        }
        cout<<endl;
    }
    cout<<endl;
    for(int a = 0; a < k; ++a)
    {
        for(int b = 0; b < k; ++b)
        {
            cout<<stamp90[b][a];
        }
        cout<<endl;
    }
    
    cout<<endl;
    for(int a = 0; a < k; ++a)
    {
        for(int b = 0; b < k; ++b)
        {
            cout<<stamp180[b][a];
        }
        cout<<endl;
    }
    
    cout<<endl;
    for(int a = 0; a < k; ++a)
    {
        for(int b = 0; b < k; ++b)
        {
            cout<<stamp270[b][a];
        }
        cout<<endl;
    }
    return 0;
}