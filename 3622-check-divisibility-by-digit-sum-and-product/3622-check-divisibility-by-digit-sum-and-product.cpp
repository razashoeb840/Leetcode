class Solution {
public:
    bool checkDivisibility(int num) {
        int n=num;
        int sum=0;
        int p=1;
        while(n>0){
            int rem=n%10;
            sum+=rem;
            p*=rem;
            n/=10;

        }
        int ans=sum+p;
        return num%ans==0;
    }
};