#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int max;
const int N=10;

void Nka(int t[N],const int n, const int suma, int s, int il, int i){    
    if(s == suma && il==n)
        max++;
    if(i==N)                    
        return;
    Nka(t, n, suma, s+t[i],il+1,i+1);
    Nka(t, n, suma, s,il,i+1);
}

int main()
{   
    max=0;
    int n,suma;
    int t[N];
    for(int i=0;i<N;i++)cin>>t[i];
    cin>>suma>>n;
    
}
