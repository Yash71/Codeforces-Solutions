#include<iostream>
#include<string>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='U') cout<<"D";
            else if(s[i]=='D') cout<<"U";
            else{
             cout<<"LR";
             ++i;
            }
                
        }
        cout<<"\n";
    }
    return 0;
}