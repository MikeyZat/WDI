#include <iostream>
#include <string>
#include <cmath>
using namespace std;
const int N=10;
int maks;
 void Nka(int t[N],const int n, const int suma, int s, int il, int i){    
    if(s == suma && il==n)
        maks++;
    if(i==N)                    
        return;
    Nka(t, n, suma, s+t[i],il+1,i+1);
    Nka(t, n, suma, s,il,i+1);
}
 int main()
{   
    maks=0;
    int n,suma;
    int t[N];
    for(int i=0;i<N;i++)cin>>t[i];
    cin>>suma>>n;
    Nka(t,n,suma,0,0,0);
    cout<<maks;    
}
