#include <iostream>
#include <stdio.h>
using namespace std;
//enum E_letters{A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z};
int main()
{
    long long n=0;
    long long pos=0;
    string PlanText="";
    string CipherText;
    char letters[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    cin>>n;
    cin>>PlanText;

    for(long long i=0;i<PlanText.length();i++)
    {
         pos=0;
        for(long long j=0;j<26;j++)
        {
            if(PlanText[i]==letters[j])
                {
                pos=j+n;
                if(j+n>25)
                {
                while(pos>25)
               pos=pos%26;
                }
                }
        }
        CipherText=CipherText+letters[pos];
    }
    cout<<CipherText<<endl;
    return 0;
}
