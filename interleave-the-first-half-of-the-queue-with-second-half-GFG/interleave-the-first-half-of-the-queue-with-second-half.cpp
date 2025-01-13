class Solution{
public:
    vector<int> rearrangeQueue(queue<int> &q){
        vector<int>answer;
        int halfSize=q.size()/2;
        queue<int>halfQueue;
        for(int i=0;i<halfSize;i++){
            int front=q.front();
            q.pop();
            halfQueue.push(front);
        }
        
        while(!q.empty()  &&  !halfQueue.empty()){
            int q1 = halfQueue.front();
            int q2 = q.front();
            halfQueue.pop();
            answer.push_back(q1);
            q.pop();
            answer.push_back(q2);
        }
        return answer;
        
    }
};
