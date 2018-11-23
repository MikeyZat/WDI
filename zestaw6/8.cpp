#include <iostream>
#include <string>
using namespace std;
const int N=5;
int MIN;

bool possibleMove(int k){
    if(k<0||k>=N) return false;
    return true;
}

void super_king(int row_indx,int col_indx, int sum, int t[N][N]){
    if(row_indx==N or sum>=MIN){
        if(sum<MIN)
            MIN=sum;
        return;
    }
    sum+=t[row_indx][col_indx];
    if(possibleMove(col_indx-1)) super_king(row_indx+1,col_indx-1,sum,t);
    if(possibleMove(col_indx+1)) super_king(row_indx+1,col_indx+1,sum,t);
    super_king(row_indx+1,col_indx,sum,t);
}

void king(int k, int t[N][N]){
    super_king(0,k,0,t);
}


int main()
{
    int tab[N][N];
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>tab[i][j];
        }
    }
    int k;
    cin>>k;
    MIN=0;
    for(int i=0;i<N;i++)            //setting starting value for MIN
        MIN+=tab[i][k];
    king(k,tab);
    cout<<MIN;
}
