class Solution {
public:
bool isAlphanumeric(char ch){
  if((ch>='0' && ch<='9') || 
  ( tolower(ch)>='a' && tolower(ch)<='z')){return true;}
  return false;
}
    bool isPalindrome(string s) {
        int st=0,e=s.length()-1;
        while(st<e){
            if(!isAlphanumeric(s[st])){
                 st++; continue;
            }

            if(!isAlphanumeric(s[e])){
                 e--; continue;
            }
            if(tolower(s[st])!=tolower(s[e])){
                return false;
            }else{ 
                st++;
                e--;
                }
        }return true;
    }
};