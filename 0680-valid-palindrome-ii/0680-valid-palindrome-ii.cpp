class Solution {
public:
    bool valid(string s,int st,int e){
        
        while(st<e){
            char l=s[st];
            char r=s[e];
            if(!isalnum(l)) st++;
            else if(!isalnum(r))e--;
            else{
                if(tolower(l)!=tolower(r))return false;
                    
                    st++;
                    e--;
                
            }
            
        }
        return true;
    }
    bool validPalindrome(string s) {
        int st=0,e=s.size()-1;
        while(st<e){
            if(s[st]==s[e]){
                st++;
                e--;
            }
            else return(valid(s,st+1,e)||valid(s,st,e-1));
        }
        return true;
    }
};