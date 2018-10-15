#include <iostream>
using namespace std;
int main(){
    int liczba,n=1;
    cin>>liczba;
    // sprawdzamy kolejne wyrazy ciągu, jeśli jakiś jest dzielnikiem to wychodzimy z pętli
    while(liczba%(n*n + n + 1)!=0){
        // jeśli wyrazy są już większę niż liczba to kończymy program
        if(n*n +n +1>liczba){
            cout<<"nie";
            return 0;
        }
        n++;
    }
 cout<<"tak";
 return 0;
}
