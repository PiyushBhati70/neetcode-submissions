class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
            return false;
        int charFreq[26]={0};
        for(int i=0;i<s.length();i++)
        {
            charFreq[s[i]-'a']++;
            charFreq[t[i]-'a']--;
        }
        for(int i=0;i<26;i++)
        {
            if(charFreq[i]!=0)
                return false;
        }
        return true;
    }
};
