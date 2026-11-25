class Solution {
    public boolean isPalindrome(String s) {
        int l=0;
        int r=s.length()-1;
        while(l<r){
            char st=s.charAt(l);
            char e=s.charAt(r);
            if(!Character.isLetterOrDigit(st)) l++;
            else if(!Character.isLetterOrDigit(e)) r--;
            else{
                if(Character.toLowerCase(st)!=Character.toLowerCase(e)) return false;
                l++;
                r--;
            }
        }
        return true;
    }
}