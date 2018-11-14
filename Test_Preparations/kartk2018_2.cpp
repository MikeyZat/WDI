using namespace std;
const int MAX = 1000;
    
int difference(int t[MAX][MAX]){
    int max_w[MAX];
    int min_w[MAX];
    int max_index=0;
    int min_index=0;
    for(int i=0;i<MAX;i++){
        max_w[i]=min_w[i]=t[0][i];}
        
    for(int i=1;i<MAX;i++){
        int j=0;
        while(j<MAX&&max_w[j]==t[i][j]){
            j++;}
        if(j<MAX&&max_w[j]<t[i][j]){
            max_index=i;
            while(j<MAX){
                max_w[j]=t[i][j];
                j++;}
                continue;}
        j=0;
        while(j<MAX&&min_w[j]==t[i][j]){
            j++;}
        if(j<MAX&&min_w[j]>t[i][j]){
            min_index=i;
            while(j<MAX){
                min_w[j]=t[i][j];
                j++;}}
    }
    return max_index-min_index>0 ? max_index-min_index : min_index-max_index;
}
