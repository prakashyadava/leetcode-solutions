class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> alt;
        alt.push_back(0);
        // int temp = gain[0];
        int tem = 0;
        for(int i=0;i<gain.size();i++){
            int temp =tem+ gain[i];
            alt.push_back(temp);
            tem = temp;
            
        }
        sort(alt.begin(),alt.end());
        return alt[alt.size()-1];
    }
};
