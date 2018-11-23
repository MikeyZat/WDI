#include <iostream>
using namespace std;
const int N=6;
int finalSum;
void sumUp(int sum, int idxSum, int idx, int tab[N], int count, int &min){          //count is number of elements in collection
    if(sum == idxSum&&sum>0&&count<min){
        min=count;
        finalSum=sum-3;
        return;
    }
    if(idx == N)
        return;
    sumUp(sum+tab[idx], idxSum+idx+1, idx+1, tab, count+1,min);
    sumUp(sum, idxSum, idx+1, tab, count,min);
        
    }

int main()
{
    int t[N];
    for(int i=0;i<N;i++){
        cin>>t[i];
        t[i]++;
    }
    int min = N+1;
    sumUp(0,0,0,t,0,min);
    cout<<finalSum;
}
