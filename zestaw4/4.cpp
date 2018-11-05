#include <iostream>

using namespace std;
const int N = 5;

struct element{
    int rowIndex;
    int columnIndex;
};

element function(int tab[N][N]){
    int sumOfColumn[N];
    int sumOfRow[N];
    for(int j=0;j<N;j++)sumOfRow[j]=sumOfColumn[j]=0;
    
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            sumOfRow[i]+=tab[i][j];
            sumOfColumn[j]+=tab[i][j];
        }
    }
    element elem;
    elem.rowIndex=0;
    elem.columnIndex=0;
    for(int i=1;i<N;i++){
        if(sumOfRow[i]<sumOfRow[elem.rowIndex])
        elem.rowIndex=i;
        if(sumOfColumn[i]>sumOfColumn[elem.columnIndex])
        elem.columnIndex=i;
    }
    return elem;
}

int main()
{
    int tab[N][N];
    for(int i=0;i<N;i++)for(int j=0;j<N;j++)tab[i][j]=0;
    for(int i=0;i<N;i++)for(int j=0;j<N;j++)cin>>tab[i][j];
    
    element elem = function(tab);
    cout<<elem.rowIndex<<" "<<elem.columnIndex;
    
    return 0;
}
