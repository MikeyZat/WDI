#include <iostream>
using namespace std;
int main(){
    long long int n,cyfra=1;
    cin>>n;
    for(int i=2;i<n;i++){
        //o ostatnich cyfrach decydują tylko ostatnie cyfry więc zostawiam tylko je
        cyfra=cyfra%1000000;
        //silniuje se
        cyfra*=i;
        //jeśli zera są na końcu to obcinam
        while(cyfra%10==0){
            cyfra/=10;
        }}
        
    cout<<cyfra%10;
}
