
class Solution {
public:
    long long countCommas(long long n) {
        long long count=0;

        //     long long countCommas(long long n) {
        
//         long long cnt = 0;
//         if (n >= 1000) {
           
//             for (int i = 1000; i <= n; i++) {
//                 string s = to_string(i);
//                     for (int i = s.size() - 3; i > 0; i -= 3) {
//                         cnt++;
//                     }
//             }
//         }
//         return cnt;

        if(n-1000>=0){
            if(n<=999999) count+=n-1000+1;
            else count+=999999-1000+1;
        }
        if(n-1000000>=0){
            if(n<=999999999) count+=(n-1000000+1)*2;
            else count+=(999999999-1000000+1)*2;
        }
        if(n-1000000000>=0){
            if(n<=999999999999) count+=(n-1000000000+1)*3;
            else count+=(999999999999-1000000000+1)*3;
        }
        if(n-1000000000000>=0){
            if(n<=999999999999999) count+=(n-1000000000000+1)*4;
            else count+=(999999999999999-1000000000000+1)*4;
        }
        if(n-1000000000000000>=0)
            count+=(n-1000000000000000+1)*5;
        return count;
    }
};