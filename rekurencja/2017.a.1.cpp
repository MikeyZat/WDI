#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool prime(int n){
    if(n==4||n==6||n==8||n==9) return false;
    return true;
    }
    
void rozmiesc(int t[9], bool tab[10], int idx, bool pp){
    if(idx==9){
        for(int i=0;i<9;i++)cout<<t[i]<<" ";
        cout<<endl;
    }
    
    for(int i=2;i<10;i++){
        if(!tab[i]){
            if(abs(t[idx-1]-i)>=2){
                if(!(pp&prime(i))){
                    t[idx]=i;
                    tab[i]=true;
                    if(prime(i))
                        rozmiesc(t,tab,idx+1,true);
                    else
                        rozmiesc(t,tab,idx+1,false);
                    
                    t[idx]=0;
                    tab[i]=false;
                }
            }
        }
    }
}

void supRozmiesc(int t[9]){
    bool tab[10]; for(int i=0;i<11;i++)tab[i]=false;
    tab[1]=true;
    rozmiesc(t,tab,1,false);
}
                        
    
int main()
{
  int t[9];
  t[0]=1;
  for(int i=1;i<9;i++)
    t[i]=0;
    
    supRozmiesc(t);
}
