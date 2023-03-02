class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size()<=1)
        return true;
        int st=0,en=s.size()-1;
        int mid=(st+en)/2;
        while(st<en){
           
            while(st<en && !isalnum(s[st])) st++; 
             while(st<en && !isalnum(s[en])) en--;
               
            
            if(st<en && tolower (s[st]) != tolower (s[en])) return false;
            st++;
            en--;
        }
       return true;
    }
};
