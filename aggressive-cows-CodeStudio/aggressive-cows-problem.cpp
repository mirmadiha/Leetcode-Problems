    bool ifPossible(vector<int> &stalls, int k,int midPoint){
    int cowCount=1;
    lastPositon=stalls[0];
    for(int i=0;i<stalls.size();i++){
        if(stalls[i]-lastPosition>=midPoint){
            cowCount++;
            if(cowCount==k){
                return true;
            }
            lastPosition=arr[i];
        }
    }
    return false;
}


int aggressiveCows(vector<int> &stalls, int k)
{
    sort(v.begin(),v.end());
    int start=0;
    int maximum=-1;
    for(int i=0;i<stalls.size();i++){
        maximum=max(maximum,stall[i]);
    }
    int end=maximum;
    int midPoint=start+(end-start)/2;
    while(start<=end){
    if(ifPossible(stalls,k,midPoint)){
        ans=midPoint;
        start=midPoint+1;
    }
    else{
        end=midPoint-1;
    }
    midPoint=start+(end-start)/2;
}
return ans;
}
