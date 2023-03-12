#include <iostream>
#include <cstring>
using namespace std;

int main () {
    int times = 0;
    cin>>times;
    for(int nm = 0; nm < times; ++nm)
    {
        int n = 0;
        cin>>n;
        char canvas[n][n];
        int works[n][n];
        memset(works, 0, sizeof(works));
        for(int a = 0; a < n; ++a)
        {
            for(int b = 0; b < n; ++b)
            {
                cin>>canvas[b][a];
            }
        }
        
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
                stamp270[a][b] = stamp180[d][c];
                ++d;
            }
            ++c;
        }
        
        
        
        
        
        
        
    
        
        
        
        for(int z = 0; z < n-k+1; ++z)
        {
            for(int g = 0; g < n-k+1; ++g)
            {
                bool worksnow = true;
                for(int x = 0; x < k; ++x)
                {
                    for(int h = 0; h < k; ++h)
                    {
                        if(stamp[x][h] == '*' && canvas[z+x][g+h] == '.')
                        {
                            worksnow = false;
                        }
                    }
                }
                if(worksnow == true)
                {
                    for(int x = 0; x < k; ++x)
                    {
                        for(int h = 0; h < k; ++h)
                        {
                            if(stamp[x][h] == '*' && canvas[z+x][g+h] == '*')
                            {
                                works[z+x][g+h] = 1;
                            }
                        }
                    }
                }
    
            }
        }
        
        
        
        
        for(int z = 0; z < n-k+1; ++z)
        {
            for(int g = 0; g < n-k+1; ++g)
            {
                bool worksnow = true;
                for(int x = 0; x < k; ++x)
                {
                    for(int h = 0; h < k; ++h)
                    {
                        if(stamp90[x][h] == '*' && canvas[z+x][g+h] == '.')
                        {
                            worksnow = false;
                        }
                    }
                }
                if(worksnow == true)
                {
                    for(int x = 0; x < k; ++x)
                    {
                        for(int h = 0; h < k; ++h)
                        {
                            if(stamp90[x][h] == '*' && canvas[z+x][g+h] == '*')
                            {
                                works[z+x][g+h] = 1;
                            }
                        }
                    }
                }
    
            }
        }
        
        
        
        
        for(int z = 0; z < n-k+1; ++z)
        {
            for(int g = 0; g < n-k+1; ++g)
            {
                bool worksnow = true;
                for(int x = 0; x < k; ++x)
                {
                    for(int h = 0; h < k; ++h)
                    {
                        if(stamp180[x][h] == '*' && canvas[z+x][g+h] == '.')
                        {
                            worksnow = false;
                        }
                    }
                }
                if(worksnow == true)
                {
                    for(int x = 0; x < k; ++x)
                    {
                        for(int h = 0; h < k; ++h)
                        {
                            if(stamp180[x][h] == '*' && canvas[z+x][g+h] == '*')
                            {
                                works[z+x][g+h] = 1;
                            }
                        }
                    }
                }
    
            }
        }
        
        
        
        
        for(int z = 0; z < n-k+1; ++z)
        {
            for(int g = 0; g < n-k+1; ++g)
            {
                bool worksnow = true;
                for(int x = 0; x < k; ++x)
                {
                    for(int h = 0; h < k; ++h)
                    {
                        if(stamp270[x][h] == '*' && canvas[z+x][g+h] == '.')
                        {
                            worksnow = false;
                        }
                    }
                }
                if(worksnow == true)
                {
                    for(int x = 0; x < k; ++x)
                    {
                        for(int h = 0; h < k; ++h)
                        {
                            if(stamp270[x][h] == '*' && canvas[z+x][g+h] == '*')
                            {
                                works[z+x][g+h] = 1;
                            }
                        }
                    }
                }
    
            }
        }
        bool finalanswer = true;
        int annoying[n][n];
        for(int a = 0; a < n; ++a)
        {
            for(int b = 0; b < n; ++b)
            {
                if(canvas[b][a] == '.')
                {
                    annoying[b][a] = 0;
                }
                else
                {
                    annoying[b][a] = 1;
                }
            }
            //cout<<endl;
        }
        for(int a = 0; a < n; ++a)
        {
            for(int b = 0; b < n; ++b)
            {
                if(works[b][a] != annoying[b][a])
                {
                    finalanswer = false;
                }
                //cout<<works[b][a];
            }
            //cout<<endl;
            
            
        }
        if(finalanswer == true)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}