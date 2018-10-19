#include <iostream>

using namespace std;

int main()
{
    //tablica ilości wystąpień cyfr
    int tab[10]; for(int i=0;i<10;i++)tab[i]=0;
    
    int a,b;
    cin>>a>>b;
    
    while(a>0){
        //wystąpienie danej cyfry w liczbie a oznaczamy plusem
        tab[a%10]++;
        //wystąpienie danej cyfry w liczbie b oznaczamy minusem
        tab[b%10]--;
        // obcinam cyfrę którą 'dodałem' do tablicy
        a/=10;
        b/=10;
    }
    
    //jeśli cyfry były takie same to tablica powinna się wyzerować
    for(int i=0;i<10;i++){
        if(tab[i]!=0){
            cout<<"nie mają takich samych cyfr";
            return 0;
        }
    }
    
    if(a==0 && b==0){
        cout<<"mają takie same cyfry";
    }else{
        cout<<"nie mają takich samych cyfr";
    }
    return 0;
}
