#include <cctype>
class Solution {
public:
    bool isPalindrome(string s) {
        int start=0,end=s.length();
        end--;
        while(start<end){
            while(!(s[start]>=97 && s[start]<=122 || s[start]>=48 && s[start]<=57 || s[start]>=65 && s[start]<=90) && start<end){start++;}
            while(!(s[end]>=97 && s[end]<=122 || s[end]>=48 && s[end]<=57 || s[end]>=65 && s[end]<=90) && start<end){end--;}
            if(s[start]>=65 && s[start]<=90){s[start]=tolower(s[start]);}
            if(s[end]>=65 && s[end]<=90){s[end]=tolower(s[end]);}
            if(s[start]!=s[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};
