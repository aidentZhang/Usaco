#include <iostream>
#include <string>
#include <cstring>

using namespace std;


int main () {
    std::ios::sync_with_stdio(false);
    //ifstream infile ("infile.txt");
    //ofstream outfile("outfile.txt");
    int num = 0;
    cin>>num;
    char moo[105];
    memset(moo, 'Z', sizeof(moo));
    for(int k = 0; k < num; ++k)
    {
        memset(moo, 'Z', sizeof(moo));
        int moosize = 0;
        int answer = 0;
        cin>>moo;
        for(int q = 0; q < 105; ++q)
        {
            if(moo[q] == 'Z')
            {
                break;
            }
            else
            {
                ++moosize;
            }
        }
        moosize -= 1;
        int oPos = -1;
        for(int z = 1; z < moosize-1; ++z)
        {
            if(moo[z] == 'O')
            {
                oPos = z;
                break;
            }
        }
        //check MOM
        for(int z = 1; z < moosize-1; ++z)
        {
            if(moo[z] == 'O' && moo[z+1] == 'M' && moo[z-1] == 'M' && z+1 < moosize)
            {
                oPos = z;
                break;
            }
        }
        //check moo
        for(int z = 1; z < moosize-1; ++z)
        {
            if(moo[z] == 'O' && moo[z+1] == 'O' && moo[z-1] == 'M' && z+1 < moosize)
            {
                oPos = z;
                break;
            }
        }
        if(oPos == -1)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            if(moo[oPos+1] == 'M')
            {
                answer += 1;
            }
            if(moo[oPos-1] == 'O')
            {
                answer += 1;
            }
            answer += moosize-3;
            cout<<answer<<endl;
        }
        
        
    }
    //infile.close();
    return 0;
}