#include <iostream>
#include<string>
using namespace std;

bool czyPalindrom(string liczba){
    int len=liczba.size();
    for(int i=0;i<len/2;i++){
        if(liczba[i]!=liczba[len-1-i]){
            return false;
        }
    }
    return true;
}

string toString(int liczba){
    string liczbaString="";
    while(liczba>0){
        liczbaString=char(liczba%10+48)+liczbaString;
        liczba/=10;
    }
    return liczbaString;
}

string bin(int n){
    string liczba="";
    while(n>0){
       // cout<<liczba<<endl;
       // cout<<n%2<<endl;
       // cout<<n<<endl;
        liczba=char(n%2+48)+liczba;
        n/=2;
        }
  //  cout<<liczba<<endl;
    return liczba;
}




int main()
{
    int n;
    cin>>n;
    cout<<toString(n)<<endl;
    cout<<bin(n);
    
    string nBinarnie = bin(n);
    string nString = toString(n);
    if(czyPalindrom(nString)){
        cout<<"liczba w zapisie dziesiętnym jest palindromem"<<endl;
    }else{
        cout<<"liczba w zapisie dziesiętnym nie jest palindromem"<<endl;
    }
    if(czyPalindrom(nBinarnie)){
        cout<<"liczba w zapisie binarnym jest palindromem"<<endl;
    }else{
        cout<<"liczba w zapisie binarnym nie jest palindromem"<<endl;
    }
}
