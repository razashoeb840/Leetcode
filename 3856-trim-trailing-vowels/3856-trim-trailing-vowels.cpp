class Solution {
public:
    string trimTrailingVowels(string s) {

        for(int i=s.size()-1;i>=0;i--){
            char c=s[i];
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
                s.pop_back();
            }
            else{
                break;
            }
        }

        return s;
    }
};