class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
        for(int i=0; i<intervals.size(); i++){
            if(ans.empty()){
                ans.push_back(intervals[i]);
            }else{
                vector<int> &v=ans.back(); //previous
                int y=v[1];
                if(y>=intervals[i][0]){
                    v[1]=max(y,intervals[i][1]);
                    
                }else{
                    ans.push_back(intervals[i]);
                }

            }
        }
        return ans;
    }
};