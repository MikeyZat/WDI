#include <iostream>
#include <string>
using namespace std;
const int SIZE = 10;

struct ulamek{
    int l;
    int m;
};

int NWD(int a, int b){
    int pom;
    while(b!=0){
        pom=b;
        b=a%b;
        a=pom;
    }
    return a;
}

bool porownaj(ulamek l1, ulamek l2){
    if(l1.l==l2.l && l1.m==l2.m){
        return true;
        }
    return false;
}

void skroc(ulamek &l){
    int b = NWD(l.l, l.m);
    l.l/=b;
    l.m/=b;
}

ulamek dodaj(ulamek l1, ulamek l2){
    ulamek wynik;
    wynik.l=l1.l*l2.m + l2.l*l1.m;
    wynik.m=l1.m*l2.m;
    skroc(wynik);
    return wynik;
}

ulamek pomnoz(ulamek l1, ulamek l2){
    ulamek wynik;
    wynik.l=l1.l*l2.l;
    wynik.m=l1.m*l2.m;
    skroc(wynik);
    return wynik;
}

int policz(ulamek t[SIZE]){
    int ilA=0,ilG=0;
    
    ulamek dwa;
    dwa.l=2;
    dwa.m=1;
    bool wA=false;
    bool wG=false;
    for(int i=1;i<SIZE-1;i++){
        if(porownaj(pomnoz(t[i],dwa),dodaj(t[i-1],t[i+1]))){
            if(!wA)
                ilA++;
            wA=true;
        }else{
            wA=false;
        }
        
        if(porownaj(pomnoz(t[i],t[i]),pomnoz(t[i-1],t[i+1]))){
            if(!wG)
                ilG++;
            wG=true;
        }else{
            wG=false;
        }
    }
    if(ilA>ilG){
        return 1;
    }else if(ilA==ilG){
        return 0;
    }else{
        return -1;
    }
}
int main()
{
    ulamek t[SIZE];
   for(int i=0;i<SIZE;i++){
       cin>>t[i].l>>t[i].m;
   }
   
   cout<<policz(t);
  
}
