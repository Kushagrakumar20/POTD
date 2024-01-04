// tc --> O(n*n)
// sc --> O(n)





class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         string s1="";
       int i=0;
       while(true){
           char c=0;
           for(auto s:strs){
               if(i >= s.size()){
                   c=0;
                   break;
               }
               if(c==0){
                   c=s[i];
               }
               else if(s[i] != c){
                   c=0;
                   break;
               }
           }
           if(c==0){
               break;
           }
           s1.push_back(c);
           i++;
       }
       return s1;
    }
};