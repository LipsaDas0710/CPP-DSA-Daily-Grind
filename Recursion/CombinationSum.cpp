#include<iostream>
#include<vector>
using namespace std;

void findCombination(int ind, vector<int>& candidates, int target, vector<vector<int>>& ans, vector<int>& ds){
    if(ind==candidates.size()){
        if(target==0){
            ans.push_back(ds);
        }
        return;
    }

    if(candidates[ind]<=target){
        ds.push_back(candidates[ind]);
        findCombination(ind,candidates,target-candidates[ind],ans,ds);
        ds.pop_back();
    }

    findCombination(ind+1, candidates, target, ans, ds);
}

vector<vector<int>> combination(vector<int>& candidates, int target){
    vector<vector<int>> ans;
    vector<int> ds;
    findCombination(0,candidates, target ,ans , ds);
    return ans;
}


int main(){
    vector<int> candidates={2,4,3,4,7,6};
    int target=12;
    vector<vector<int>> result= combination(candidates, target);

     for(const auto& comb : result){
        for(int num : comb){
            cout << num << " ";
        }
        cout << endl;
    }
    
    return 0;
}