class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater=0;
        int n=height.size();
        int lp=0;
        int rp=n-1;
        while(lp<rp){
             int width=rp-lp;
                int ht=min(height[lp],height[rp]);
                int area=width*ht;
                maxwater=max(maxwater,area);

                if(height[lp]<height[rp]){
                    lp++;
                }else{
                    rp--;
                }
        }
        return maxwater;
          

    }
};














//Brute force

// int maxwater=0;
//         for(int i=0;i<height.size();i++){

//             for(int j=i+1;j<height.size();j++){
                // int width=j-i;
                // int ht=min(height[i],height[j]);
                // int area=width*ht;
                // maxwater=max(maxwater,area);

//             }

//         }
//         return maxwater;