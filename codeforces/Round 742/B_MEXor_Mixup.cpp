#include<iostream>
#include<vector>

using namespace std;

const int N=3e5+5;
int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    cin>>t;
    //Pre computation
    vector<int> xorVal(N,0);
    for(int i=1;i<N;i++)
        xorVal[i]=xorVal[i-1]^i;
    //Pre computation
    while(t--){
        int a,b;
        cin>>a>>b;
        int minlen=a;
        int val=xorVal[a-1];
        if(val!=b){
            int req=val^b; //properties of XOR
            if(req==a) cout<<minlen+2<<endl;
            else cout<<minlen+1<<endl;
        }
        else cout<<minlen<<endl;
    }
    return 0;
    
}