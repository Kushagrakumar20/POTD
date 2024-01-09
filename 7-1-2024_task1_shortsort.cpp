#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n , count = 0;
    cin>>n;
    char ch;
    string s;
    while(n--){
       cin>>s;
       if(s[0] != 'a') count++;
       if(s[1] != 'b') count++;
       if(s[2] != 'c') count++;

       if(count % 2) cout<<"NO"<<endl;
       else cout<<"YES"<<endl;
       count = 0;
    }
    return 0;
}