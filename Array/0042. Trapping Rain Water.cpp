class Solution {
public:
    int trap(vector<int>& height) {
        int maxHeight = 0;
        for(int i=0;i<height.size();i++){
            maxHeight = max(maxHeight,height[i]);
        }
        int sum =0;
        int mx =0;
        int start = -1;
        int end = -2;
        for(int i=0;i<height.size();i++){
            if(height[i]==maxHeight){
                start = i;
                break;
            }
            if(height[i]>mx){
                mx = height[i];
            }
            sum += mx-height[i];
        }
        mx = 0;
        for(int i=height.size()-1;i>=0;i--){
            if(height[i]==maxHeight){
                end = i;
                break;
            }
            if(height[i]>mx){
                mx = height[i];
            }
            sum+= mx-height[i];
        }
        if(start!=end && start+end>0){
            for(int i=start;i<end;i++){
                sum += height[start]- height[i];
            }
        }
        return sum;
    }
};
