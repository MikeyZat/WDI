int main()
{
    int tab[10]; for(int i = 0; i<10; i++) tab[i]=0;
    int liczba;
    
    while(true){
        cin>>liczba;
        if(liczba==0)
            break;
            
        int kandydat=tab[0];
        int indeks = 0;
        for(int i=1;i<10;i++){
            if(tab[i]<kandydat){
                kandydat=tab[i];
                indeks=i;
            }
                
        }
        if(liczba>tab[indeks]){
            tab[indeks]=liczba;
        }
    }
    int najmniejszaWartosc=tab[0];
    for(int i=1;i<10;i++){
        if(tab[i]<najmniejszaWartosc){
            najmniejszaWartosc=tab[i];
        }
    }
    cout<<najmniejszaWartosc;
    return 0;
}
