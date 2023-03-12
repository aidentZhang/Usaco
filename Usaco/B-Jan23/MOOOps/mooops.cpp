#include <iostream>
#include <string>


using namespace std;


int main () {
    std::ios::sync_with_stdio(false);
    //ifstream infile ("infile.txt");
    //ofstream outfile("outfile.txt");
    int num = 0;
    cin>>num;
    string str[num];
    for(int i = 0; i < num; ++i)
    {
        
        cin>>str[i];
        
        //for(int k = 0; k <  )
    }
    for(int k = 0; k < num; ++k)
    {
        int answer = 0;
        char moo[str[k].size()];
        auto it = str[k].begin();
        for(int j = 0; j < str[k].size(); ++j)
        {
            
            moo[j] = *(it+j);
            //cout<<moo[j]<<endl;
        }
        //cout<<endl;
        int oPos = -1;
        for(int z = 1; z < str[k].size()-1; ++z)
        {
            if(moo[z] == 'O')
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
            answer += str[k].size()-3;
            cout<<answer<<endl;
        }
        
        
    }
    //infile.close();
    return 0;
}