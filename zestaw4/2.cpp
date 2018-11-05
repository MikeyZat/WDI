#include <iostream>

using namespace std;
const int N = 5;

//if number has any even digits, returns false
bool onlyOdd(int a){
    while(a>0){
        if (a%2==0)
            return false;
        a/=10;}
    return true;
}

bool function(int tab[N][N]){   
    bool flag = true;                   // I assume that every row has such a number
    for(int i=0;i<N;i++)
        if(flag){
        flag=false;                     // Let's suppose this row doesnt have such a number
        for(int j=0;j<N;j++){
            if(onlyOdd(tab[i][j])){
                flag = true;            // Surprise : it has! Now, let's go on
                break;
            }
        }
    }else{
            //we found a row which doesnt have such a number
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
