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
    int haveEachOther[num][num];
    memset(haveEachOther, 0, sizeof(haveEachOther));
    //haveEachOther[x][y] is x has y, not y has x
    for(int z = 0; z < num; ++z)
    {
        for(int x = z; x < list[z]; ++x)
        {
            haveEachOther[z][x] = 1;
        }
    }
    
    for(int z = 0; z < num; ++z)
    {
        for(int x = 0; x < num; ++x)
        {
            //cout<<haveEachOther[x][z]<<" ";
        }
        //cout<<endl;
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
        if(str[z] == 'H')
        {
            if(numH == refnumH)
            {
                //cout<<"Cow "<<z+1<<" has all lists of their breed"<<endl;
                for(int j = 0; j < num; ++j)
                {
                    haveEachOther[z][j] = 1;
                }
            }
        }
        else
        {
            if(numG == refnumG)
            {
                //cout<<"Cow "<<z+1<<" has all lists of their breed"<<endl;
                for(int j = 0; j < num; ++j)
                {
                    haveEachOther[z][j] = 1;
                }
            }
        }
        //cout<<endl;
    }
    for(int z = 0; z < num; ++z)
    {
        for(int x = 0; x < num; ++x)
        {
            if(haveEachOther[x][z] == haveEachOther[z][x] && x != z && haveEachOther[x][z] != 0)
            {
                ++answer;
            }
            //cout<<haveEachOther[x][z]<<" ";
        }
        //cout<<endl;
    }
    
    cout<<answer/2<<endl;
    //infile.close();
    return 0;
}