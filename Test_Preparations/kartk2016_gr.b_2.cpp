// Example program
#include <iostream>
#include <string>
using namespace std;

const int N=15;

int podciag(int t[N]){
    int max_dl=0;
    for(int i=0;i<N;i++){               //checking all 'starting points'
        int j=N-1;                      //now going from last to first
        while(j>=0){
            int dl=0;
            int k=0;
            while(j-k>=0&&i+k<N&&t[i+k]==t[j-k]){       //reverse condition
                dl++;                                   
                k++;}
            if(dl>max_dl)
                max_dl=dl;
            j=j-k;
            if(t[i]!=t[j])
                j--;
        }
        }
    return max_dl;}
                


int main()
{
    int t[N]; for(int i=0;i<N;i++)cin>>t[i];
    
    cout<<podciag(t);
 
}
