#include <iostream>
#include<string>
using namespace std;

char znak(int liczba){
    if(liczba<10){
        return char(liczba+48);
    }
    return char(liczba+55);
}

int main()
{
    int podstawa,liczba;
    string nowaLiczba="";
    cin>>podstawa>>liczba;
    
    while(liczba>0){
        nowaLiczba=znak(liczba%podstawa)+nowaLiczba;
        liczba/=podstawa;
    }
    cout<<nowaLiczba;
}
