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
        for(int i=0;i<n;i++){
            if(s[i]!=s[i+1] ){ 
                cout<<i<<" "<<i+1;<<"\n";
                break;
            }
            else cout<<"-1 -1"<<"\n";    
        }
    }
    return 0;
}