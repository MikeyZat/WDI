#include <iostream>

using namespace std;
int sumy[17];
int tab[152];
bool sitko[5000];
int main(){
    int sumy[17]={};
    int tab[152]={};
    bool sitko[5000]={false};
    int n;
    sumy[0]=1;
    sumy[1]=2;
    sumy[2]=4;
    //znajduje wszystkie sumy podciągów od 1 wyrazu do n
    for(int i=3;i<17;i++){
        sumy[i]=2*sumy[i-1]-sumy[i-3];
    }
    
    //znajduje wszystkie możliwe sumy podciągów
   tab[0]=1;
   tab[1]=2;
   int licznik=2;
   for(int i=2;i<17;i++){
       tab[licznik++]=sumy[i];
       for(int j=0;j<i;j++){
           tab[licznik++]=sumy[i]-sumy[j];
       }
   }
   //robi sitko (które liczby mogą być a które nie)
   for(int i=0;i<152;i++){
       sitko[tab[i]]=true;
   }
   
   //wypisuje wynik
   cin>>n;
   for(int i=n+1;i<5000;i++){
       if(!sitko[i]){
           cout<<i;
           return 0;
       }
   }
}
