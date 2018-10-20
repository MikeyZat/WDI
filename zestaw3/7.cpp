#include <iostream>
#include<cstdlib>
using namespace std;

bool czyZawieraNieparzysta(int n){
    while(n>0){
        int cyfra = n%10;
        if(cyfra%2==1)
            return true;
        n/=10;
    }
    return false;
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
        if(!czyZawieraNieparzysta(tab[i])){
            cout<<"nie";
            return 0;
        }
        i++;
    }
    cout<<"tak";
    return 0;
}
