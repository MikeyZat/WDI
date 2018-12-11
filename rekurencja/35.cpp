#include <iostream>
#include <string>
#include <cmath>
using namespace std;
const int N=8;

bool podzial(int t[N],const int k, int m1, int m2, int s1, int s2, int i){
    if(i==N)
        return false;
    if(s1==s2 && m1==k && m2==k)
        return true;
    return podzial(t,k,m1+1,m2,s1+t[i],s2,i+1) || podzial(t,k,m1,m2+1,s1,s2+t[i],i+1) || podzial(t,k,m1,m2,s1,s2,i+1);
}

bool supPodzial(int t[N], int k){
    return podzial(t,k,0,0,0,0,0);
}
int main()
{
  int tab[N];
  int k;
  for(int i=0;i<N;i++)
    cin>>tab[i];
  cin>>k;    
  cout<<supPodzial(tab,k);    
}
