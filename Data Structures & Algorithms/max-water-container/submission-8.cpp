class Solution {
public:
    int maxArea(vector<int>& height) {
        vector<int>water;
        int i=0,j=height.size()-1;
        while(i<j){
            int k = min(height[i],height[j]);
            int store = k*(j-i);
            water.push_back(store);
            if(height[i]<=height[j]){
                i++;
            }
            else if(height[i]>height[j]){
                j--;
            }
        }
        sort(water.begin(),water.end());
        return water.back();
    }
};
