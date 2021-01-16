class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int pos = nums.size()-1;
        // for(int i = nums.size()-1; i > 0; i--){
        //     while(pos != 0){
        //         if(nums.at(pos) == nums.at(i)){
        //         nums.erase(nums.begin()+i);
        //         }
        //         pos--;
        //     }
        // }

        // int pos = 1;
        for(int pos = 0; pos < nums.size(); pos++){
            int compare = 0;
            while(compare < pos){
                if(compare == pos){
                    continue;
                }
                if(nums.at(pos) == nums.at(compare)){
                    nums.erase(nums.begin()+pos);
                }
                compare++;
            }
        }
        int len = nums.size();
        return len;
    }
};
