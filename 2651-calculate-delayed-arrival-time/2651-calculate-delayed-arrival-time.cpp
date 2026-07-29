

class Solution {
public:
    int findDelayedArrivalTime(int at, int dt) {
        if(at+dt<24){
            return at+dt;
        }
        else{
            return (at+dt)%24;
        }
        
    }
};