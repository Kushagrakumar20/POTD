class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<s.size() || i<t.size();i++)
        if(s[i]!=t[i])
        return false;
        
        return true;

               
    
    }

};