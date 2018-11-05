#include <iostream>

using namespace std;
const int N = 5;
//since they told me to return both co-ordinates
struct element{
    int rowIndex;
    int columnIndex;
};

element function(int tab[N][N]){
    int sumOfColumn[N];
    int sumOfRow[N];
    for(int j=0;j<N;j++)sumOfRow[j]=sumOfColumn[j]=0;
    //calculating sum of each row and column
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            sumOfRow[i]+=tab[i][j];
            sumOfColumn[j]+=tab[i][j];
        }
    }
    //creating two candidates (first for positive numbers, second for negative) 
    element elem1,elem2;
    elem1.rowIndex=0;
    elem1.columnIndex=0;
    elem2.rowIndex=0;
    elem2.columnIndex=0;
    //since we need max quotient, we would like to maximalize numerator and minimalize denominator or vice versa if negative nums
    for(int i=1;i<N;i++){
        if(sumOfRow[i]<sumOfRow[elem1.rowIndex]&&sumOfRow[i]>0)                 // >
        elem1.rowIndex=i;                                                       // |} for positive numbers
        if(sumOfColumn[i]>sumOfColumn[elem1.columnIndex]&&sumOfColumn[i]>0)     // |}
        elem1.columnIndex=i;
        if(sumOfRow[i]>sumOfRow[elem2.rowIndex]&&sumOfRow[i]<0)                 // >
        elem2.rowIndex=i;                                                       // |} for negative numbers
        if(sumOfColumn[i]<sumOfColumn[elem2.columnIndex]&&sumOfColumn[i]<0)     // |}
        elem2.columnIndex=i;                                                    // >// >
    }
    if((double)(sumOfColumn[elem1.columnIndex]/sumOfRow[elem1.rowIndex])>=(double)(sumOfColumn[elem2.columnIndex]/sumOfRow[elem2.rowIndex]))
        return elem1;
    else
        return elem2;
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
