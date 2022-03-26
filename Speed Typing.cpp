//Solver : Nahin the Coder
//Date : 26-03-2022

#include<bits/stdc++.h>
using namespace std;

//Time Complexity -> O(n)
//Space Complexity -> O(1)


int main()
{
    
    int test; cin>>test;
    int casee = 1;
    while(test--)
    {
        string I,P;
        cin>>I;
        cin>>P;
        
       
        
        if(I.length()>P.length())
        {
            cout<<"Case #"<<casee<<": "<<"IMPOSSIBLE"<<endl;
        }
        else
        {
            int idx = 0;
            int turn = P.length();
            int cnt = 0;
            while(cnt<turn)
            {
                if(P[cnt] == I[idx])
                {
                    idx++;
                }
                cnt++;
            }
            if(idx != I.length())
            {
                cout<<"Case #"<<casee<<": "<<"IMPOSSIBLE"<<endl;
            }
            else
            {
                int diff = cnt-idx;
                cout<<"Case #"<<casee<<": "<<diff<<endl;
            }
        }
        
        casee++;
    }
    
    
    
    return 0;
}
