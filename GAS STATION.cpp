class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start=0;
        int deficiet=0;
        int balance=0;

        for(int i=0;i<gas.size();i++){
            balance+=gas[i]-cost[i];
            if(balance<0){
                deficiet+=balance;
                start=i+1;
                balance=0;
            }

        }
        if(balance+deficiet>=0){
            return start;
        }
        else return -1;
    }
};