#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    set<int> ans;
    string s;
    cin>>n;
    while(n--){
        cin>>s;
        int size = s.size()/2;
        // cout<<size<<endl;
        for(int i=0; i<size; i++){
            ans.insert(s[i]);
        }
        // cout<<ans.size()<<endl;
        if(ans.size() > 1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        ans.clear();
    }
    return 0;
}