#include <iostream>
#include <string>
using namespace std;
const int N=5;

bool canBeWeighted(int current, const int weight, int idx, int tab[N]){    
    if(current == weight)
        return true;
    if(idx >= N)
        return false;
    return canBeWeighted(current+tab[idx], weight, idx+1, tab) || canBeWeighted(current, weight, idx+1, tab);
}
int main()
{
    int t[N];
    for(int i=0;i<N;i++){
        cin>>t[i];
    }
    int n;
    cin>>n;
    cout<<endl<<canBeWeighted(0,n,0,t);
}
