#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    string s;
    cin>>n;
    while(n--){
        cin>>s;
        if(s.size() == 2) cout<<s[1]<<endl;

        else{
            sort(s.begin(), s.end());
            cout<<s[0]<<endl;
        }
    }
    return 0;
}