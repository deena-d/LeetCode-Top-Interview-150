class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        for(int i=0;i<nums.size();i++){
            if( nums[i] != val ){
                nums[k++] = nums[i];
            }
            
        }
        return k;
    }

    int main(){
        
        int n,val;
        cin>>n;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        cin>>val;
        int result = removeElement(nums,val);
        cout<<result;
        return 0;
    }
};