#include <iostream>
#include <string>
using namespace std;

const int N=5;

struct Move{
    int x;
    int y;
};

Move moves[8] = {{2,1}, {2,-1}, {-2,1}, {-2,-1}, {1,2}, {1,-2}, {-1,2}, {-1,-2}};
    
const int moves_size=8;

bool possibleMove(int x, int y,int tab[N][N]){
    if(x < 0 || y < 0 || x >= N || y >= N) return false;

    if(tab[x][y] >0 && tab[x][y]!=0) return false;

    return true;
}

bool knight(int cur_x, int cur_y, int tab[N][N], int counter){
    //cout<<"i "<<i<<" j "<<j<<" counter "<<counter<<endl;
    tab[cur_x][cur_y]=counter;
    if(counter==N*N)
        return true;
    
    for(int i=0;i< moves_size;i++){
        int next_x = cur_x+moves[i].x;
        int next_y = cur_y+moves[i].y;
        if(possibleMove(next_x,next_y,tab))
            if(knight(next_x,next_y,tab,counter+1))
                return true;
    }
    
    tab[cur_x][cur_y]=0;
    return false;
}
    


int main()
{
  int t[N][N];
  for(int i=0;i<N;i++)
    for(int j=0;j<N;j++)
        t[i][j]=0;

    knight(0,0,t,1);
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<t[i][j]<<" ";
            }
        cout<<endl;
    }
                
    
}
