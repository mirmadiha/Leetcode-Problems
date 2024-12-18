class Solution {
public:
    void merge(vector<int>& nums, int start, int end){
        int mid=start+(end-start)/2;
        int len1=mid-start+1;
        int len2=end-mid;
        int* first=new int[len1];
        int* second=new int[len2];
        int mainIndexArray=start;
        for(int i=0;i<len1;i++){
            first[i]=nums[mainIndexArray++];
        }
        for(int i=0;i<len2;i++){
            second[i]=nums[mainIndexArray++];
        }
        int index1=0;
        int index2=0;
        mainIndexArray=start;
        while(index1<len1 && index2<len2){
            if(first[index1]<second[index2]){
                nums[mainIndexArray++]=first[index1++];
            }
            else{
                nums[mainIndexArray++]=second[index2++];
            }
        }
        while(index1<len1){
            nums[mainIndexArray++]=first[index1++];
        }
        while(index2<len2){
            nums[mainIndexArray++]=second[index2++];
        }
        delete[] first;
        delete[] second;
    }   

    void mergeSort(vector<int>& nums,int start,int end) {
        if(start>=end){
            return;
        }
        int mid=start+(end-start)/2;
        mergeSort(nums,start,mid);

        mergeSort(nums,mid+1,end);

        merge(nums,start,end);
    }

    vector<int> sortArray(vector<int>& nums) {
        int start=0;
        int end=nums.size()-1;
        mergeSort(nums,start,end);
        return nums;
    }
};