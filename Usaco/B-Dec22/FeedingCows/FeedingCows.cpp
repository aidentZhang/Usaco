#include <iostream>

using namespace std;


int main () {
    int queries = 0;
    cin>>queries;
    for(int i = 0; i < queries; ++i)
    {
        int answer = 0;
        int numCows = 0;
        
        cin>>numCows;
        int moveMax = 0;
        cin>> moveMax;
        char str[numCows];
        char final[numCows];
        str[0] = 'G';
        //cout<<str[0]<<" str"<<endl;
        for(int k = 0; k < numCows; ++k)
        {
            //cout<<"K "<<k<<endl;
            cin>>str[k];
            //cout<<str[k]<<endl;
        }
        for(int k = 0; k < numCows; ++k)
        {
            final[k] = '.';
        }
        //cout<<"init"<<endl<<endl;
        int counter = 0;
        bool startcounter = false;
        for(int a = 0; a < numCows; ++a)
        {
            //cout<<counter<<endl;
            //cout<<str[a]<<endl;
            if(str[a] == 'G' && counter == 0)
            {
                ++answer;
                counter = 0;
                //cout<<"a+moveMax "<<a+moveMax<<endl;
                if(a+moveMax >= numCows)
                {
                    final[numCows-1] = 'G';
                }
                final[a+moveMax] = 'G';
                //cout<<"set "<<a+moveMax<<" to G"<<endl;
                startcounter = true;
            }
            if(startcounter == true)
            {
                ++counter;
            }
            if(counter == (moveMax*2)+1)
            {
                counter = 0;
                startcounter = false;
            }
        }
        startcounter = false;
        counter = 0;
        //cout<<"hs"<<endl;
        for(int a = 0; a < numCows; ++a)
        {
            //cout<<counter<<endl;
            if(str[a] == 'H' && counter == 0)
            {
                ++answer;
                //cout<<"posH"<<endl;
                counter = 0;
                if(a+moveMax < numCows)
                {
                    final[a+moveMax] = 'H';
                }
                else if (final[numCows-1] == 'G' && a+moveMax >= numCows && final[numCows-2] != 'G')
                {
                    //cout<<"set "<<a+moveMax<<" to H"<<endl;
                    final[numCows-2] = 'H';
                }
                else if (final[numCows-2] == 'G')
                {
                    final[numCows-3] = 'H';
                }
                else if (final[numCows-3] == 'G')
                {
                    final[numCows-4] = 'H';
                }
                else if (final[numCows-4] == 'G')
                {
                    final[numCows-5] = 'H';
                }
                else if (final[numCows-5] == 'G')
                {
                    final[numCows-6] = 'H';
                }
                else if (final[numCows-6] == 'G')
                {
                    final[numCows-7] = 'H';
                }
                else if (final[numCows-7] == 'G')
                {
                    final[numCows-8] = 'H';
                }
                else if (final[numCows-8] == 'G')
                {
                    final[numCows-9] = 'H';
                }
                
                startcounter = true;
            }
            if(startcounter == true)
            {
                ++counter;
            }
            if(counter == (moveMax*2)+1)
            {
                //cout<<"counter ="<<endl;
                counter = 0;
                startcounter = false;
            }
        }
        cout<<answer<<endl;
        for(int k = 0; k < numCows; ++k)
        {
            cout<<final[k];
        }
        cout<<endl;
    }
    
    
    return 0;
}