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

string bin(int n){
    string liczba="";
    while(n>0){
       // cout<<liczba<<endl;
       // cout<<n%2<<endl;
       // cout<<n<<endl;
        liczba=to_string(n%2)+liczba;
        n/=2;
        }
  //  cout<<liczba<<endl;
    return liczba;
}




int main()
{
    int n;
    cin>>n;
    string nBinarnie = bin(n);
    string nString = to_string(n);
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
    
    
