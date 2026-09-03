class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length()==t.length()){
            int a1[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
            char c;
            for(int i=0;i<s.length();i++){
                c=s[i];
                    a1[c-97]++;
            }
            for(int i=0;i<t.length();i++){
                c=t[i];
                    a1[c-97]--;
            }
            for(int i=0;i<26;i++){
                if(a1[i]!=0){
                return false;
            }
            }
            return true;
        }
        return false;
    }
};
