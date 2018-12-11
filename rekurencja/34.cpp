// Example program
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
const int N=20;
void podziel(int n, int t[N]){
    int i=0;
    for(int j=2;j<=sqrt(n);j++){
        if(n%j==0){
            t[i]=j;
            i++;
            while(n%j==0){
                n/=j;
            }
        }
    }
    if(n>1)
        t[i]=n;
}
int suma(int t[N], int i){
    if(t[i]==0){
        return 1;
    }
    return t[i]*suma(t,i+1) + suma(t,i+1);
}
int supSuma(int n){
    int t[N]; for(int i=0;i<20;i++)t[i]=0;
    podziel(n,t);
    return suma(t,0)-1;
}
int main()
{
    int n;
    cin>>n;
    cout<<supSuma(n);
}
