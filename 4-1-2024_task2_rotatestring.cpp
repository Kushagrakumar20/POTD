// TC --> O(N)
// SC --> O(1)
// We just add the string s into string s and find goal in that concatenated string.


class Solution {
public:
    bool rotateString(string s, string goal) {
        
        if(s.length() != goal.length()) return false;
        
        s += s;

        return s.find(goal) != string::npos;    

    }
};