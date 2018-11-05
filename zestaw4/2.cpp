#include <iostream>

using namespace std;
const int N = 5;

bool onlyOdd(int a){
    while(a>0){
        if (a%2==0)
            return false;
        a/=10;}
    return true;
}

bool function(int tab[N][N]){
    bool flag = true;
    for(int i=0;i<N;i++)
        if(flag){
        flag=false;
        for(int j=0;j<N;j++){
            if(onlyOdd(tab[i][j])){
                flag = true;
                break;
            }
        }
    }else{
        return false;
    }
    return true;
}

int main()
{
    int tab[N][N];
    for(int i=0;i<N;i++)for(int j=0;j<N;j++)tab[i][j]=0;
    for(int i=0;i<N;i++)for(int j=0;j<N;j++)cin>>tab[i][j];
    
    cout<<function(tab);
    return 0;
}
