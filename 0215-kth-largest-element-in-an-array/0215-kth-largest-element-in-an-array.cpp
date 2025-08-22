class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>max_heap;
        int size=nums.size();
        for(int i=0;i<size;i++){
            max_heap.push(nums[i]);
        }

            for(int i=0;i<size;i++){
                nums[i]=max_heap.top();
                max_heap.pop();
            
        }
        return nums[k-1];
    }
};