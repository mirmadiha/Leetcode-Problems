void insertElement(int x , stack<int> &St){
        if(St.empty()){
            St.push(x);
            return;
        }
        
        int num=St.top();
        St.pop();
        insertElement(x , St);
        St.push(num);
    }
    void Reverse(stack<int> &St){

        if(St.empty()){
            return ;
        }
    
        int num=St.top();
        St.pop();
        
        Reverse(St);
        
        insertElement(num,St);
        
    }
