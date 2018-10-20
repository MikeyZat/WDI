#include <iostream>
#include<cstdlib>
using namespace std;

bool sameNieparzyste(int n){
    while(n>0){
        int cyfra = n%10;
        if(cyfra%2==0)
            return false;
        n/=10;
    }
    return true;
}

int main()
{   
    srand(time(NULL));
    const int MAX = 10;
    int tab[MAX];
    for(int i=0;i<MAX;i++){
        tab[i]=rand()%1000+1;
        cout<<tab[i]<<" ";
    }
    cout<<endl;
    int i=0;
    while(i<MAX){
        if(sameNieparzyste(tab[i])){
            cout<<"tak";
            return 0;
        }
        i++;
    }
    cout<<"nie";
    return 0;
}
