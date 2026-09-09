class Solution {
public:
    int rev(int num){
        int n=num;
        int r=0;
        while(n!=0){
            r=r*10+n%10;
            n/=10;
        }
        return r;
    }

    bool isprime(int n){
        if(n<2) return false;
        int cnt=0;
        for(int i=2;i<n;i++){
            if(n%i==0) cnt++;
        }

        if(cnt==0) return true;
        return false;
    }
    int sumOfPrimesInRange(int n) {
        int m=rev(n);
        int sum=0;
        for(int i=min(m,n);i<=max(m,n);i++){
            if(isprime(i)) sum+=i;
        }
        return sum;
    }
};