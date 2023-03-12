#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
using namespace std;


int main () {
    std::ios::sync_with_stdio(false);
    //ifstream infile ("infile.txt");
    //ofstream outfile("outfile.txt");
    int num = 0;
    int answer = 0;
    cin>>num;
    char str[num];
    int list[num];
    cin>>str;
    for(int i = 0; i < num; ++i)
    {
        cin>>list[i];
    }
    int refnumH = 0;
    int refnumG = 0;
    for(int k = 0; k < num; ++k)
    {
        if(str[k] == 'H')
        {
            ++refnumH;
        }
        else
        {
            ++refnumG;
        }
    }

    int numH = 0;
    int numG = 0;
    for(int z = 0; z < num; ++z)
    {
        numH = 0;
        numG = 0;
        for(int x = z; x < list[z]; ++x)
        {
            if(str[x] == 'H')
            {
                ++numH;
            }
            else
            {
                ++numG;
            }
        }
        
        if((str[z] == 'H' && numH == refnumH) || (str[z] == 'G' && numG == refnumG))
        {
            //cout<<"Cow "<<z+1<<" has all lists of their breed"<<endl;
            for(int o = 0; o < z; ++o)
            {
                if(o == z)
                {
                    continue;
                }
                else
                {
                    if((list[o] >= z && str[o] != str[z]) || ())
                    {
                        //cout<<o+1<<" "<<z+1<<endl;
                        answer += 1;
                    }
                }
            }
        }
        
        
    }
    
    
    cout<<answer<<endl;
    //infile.close();
    return 0;
}