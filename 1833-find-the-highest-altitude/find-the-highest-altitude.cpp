class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int current = 0;
        int max = 0;
        for(int i = 0;i<gain.size(); i++){
            current = gain[i] + current;
            if(max < current){
                max = current;
            }
        }
        return max;
    }
};