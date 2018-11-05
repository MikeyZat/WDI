#include <iostream>
using namespace std;
const int MAX=10;

void fillTabBorders(int tab[MAX][MAX],int start,int size){
    
    if(size==0)         // exit of recurency for table of even size
        return;
    if(size==1){            // exit of recurency for table of odd size
        tab[MAX/2][MAX/2]=start;
        return;
    }
    int init = (MAX-size)/2;   //this is the index we start filling from
    int adder=0;                // as we iterate over table we need to increment sth every time (i is taken as index, not sth we add)
    for(int i=init;i<(MAX-init)-1;i++){         //all these operations are based of math calculations I did on paper
        tab[init][i]=start+adder;               //If something isn't clear, I recommend write an example on paper, using N as a table size and
        tab[i][MAX-init-1]=start+size-1+adder;  // ask themselves how the value in a specific ceil relies on N
        tab[MAX-init-1][MAX-i-1]=start + 2*(size-1)+adder;
        tab[MAX-i-1][init]=start + 3*(size-1)+adder;
        adder++;
    }
    fillTabBorders(tab,4*(size-1)+start,size-2); // we filled all borders so we fill border of smaller square inside :)
    return;
    
}

int main(){
    int tab[MAX][MAX];
    for(int i=0;i<MAX;i++) for(int j=0;j<MAX;j++) tab[i][j]=0;
    fillTabBorders(tab,0,MAX);
    for(int i=0;i<MAX;i++){ 
        for(int j=0;j<MAX;j++) {
            cout<<tab[i][j]<<" ";
        }
        cout<<endl;
    }
}
