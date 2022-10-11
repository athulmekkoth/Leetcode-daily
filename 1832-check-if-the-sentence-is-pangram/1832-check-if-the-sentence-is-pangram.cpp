class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char>cd;
       unordered_set<char>ab;
        for(int i=0;i<sentence.size();i++)
        {
            ab.insert(sentence[i]);
        }
        if(ab.size()<26)
            return false;
        return true;
    }
};