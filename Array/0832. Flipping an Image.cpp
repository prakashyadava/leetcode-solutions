class Solution {
public:
    void reverse(vector<int> &vec){
        int i= 0;
        int j = vec.size()-1;
        while(i<=j){
            int temp = vec[i];
            vec[i] = vec[j];
            vec[j] = temp;
            i++;
            j--;
        }
    }
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int m = image.size();
        for(int i=0;i<m;i++){
            reverse(image[i]);
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                if(image[i][j]==1){
                    image[i][j]=0;
                }
                else{
                    image[i][j]=1;
                }
            }
        }
        return image;
        
    }
};
