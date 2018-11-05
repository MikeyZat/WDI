#include <iostream>

using namespace std;
const int N = 5;

bool hasEvenDigit(int a){
    while(a>0){
        if (a%2==0)
            return true;
        a/=10;}
    return false;
}

bool function(int tab[N][N]){
    bool flag = false;
    for(int i=0;i<N;i++)
        if(!flag){
            flag=true;
        for(int j=0;j<N;j++){
            if(!hasEvenDigit(tab[i][j])){
                flag = false;
                break;
            }
        }
    }else{
        return true;
    }
    return false;
}

int main()
{
    int tab[N][N];
    for(int i=0;i<N;i++)for(int j=0;j<N;j++)tab[i][j]=0;
    for(int i=0;i<N;i++)for(int j=0;j<N;j++)cin>>tab[i][j];
    
    cout<<function(tab);
    return 0;
}
