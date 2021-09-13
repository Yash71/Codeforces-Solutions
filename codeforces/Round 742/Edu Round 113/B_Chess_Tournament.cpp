#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count=0;
        for(auto i:s){
            if(i=='2') count++;
        }
        if(count==1 || count==2) cout<<"NO"<<"\n"; continue;
        cout<<"YES"<<endl;
        char mat[i][j];
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j) mat[i][j]='X';
                else mat[i][j]='=';
            }
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j=n+i;j++){
                if(s[j%n]=='2'){
                    mat[i][j%n]='+';
                    mat[j%n][i]='-';
                    break;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<mat[i][j]<<"\n";
            }
        }
    }
    return 0;
}