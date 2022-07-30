#include <bits/stdc++.h> 
using namespace std;
int main()
{
    int t,i;
    cin >> t;
    for(i = 0;i<t;i++){
        int m,n,j,k,l,x[10],y[10],matrix[1000][1000],count = 0;
        cin >> m >> n;
        for(j = 0;j<m;j++){
            for(k = 0;k<n;k++){
                cin >> matrix[j][k];
                if(matrix[j][k] == 0){
                    count++;
                    x[count]=j;
                    y[count]=k;
                }
            }
        }
        for(l = 1;l<=count;l++){
            for(j = 0;j<m;j++){
            for(k = 0;k<n;k++){
                if(j == x[l]){
                    matrix[j][k] = 0;
                }
                if(k == y[l]){
                    matrix[j][k] = 0;
                }
            }
        }
        }
        
        for(j = 0;j<m;j++){
            for(k = 0;k<n;k++){
                cout << matrix[j][k];
            }
        }
    }
}