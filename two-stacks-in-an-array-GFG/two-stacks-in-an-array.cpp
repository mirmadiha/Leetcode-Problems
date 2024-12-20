class twoStacks {
  public:
  int* arr;
  int top1;
  int top2;
  int size;

    twoStacks() {
        size=100;
        this->size=size;
        arr=new int[size];
        top1=-1;
        top2=size;
    }

    // Function to push an integer into the stack1.
    void push1(int x) {
        // code here
        if(top1 < top2 - 1){
            top1++;
            arr[top1]=x;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }

    // Function to push an integer into the stack2.
    void push2(int x) {
        // code here
        if(top1 < top2 - 1){
            top2--;
            arr[top2]=x;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }

    // Function to remove an element from top of the stack1.
    int pop1() {
        // code here
        if(top1>=0){
            int y = arr[top1];
            top1--;
            return y;
        }
        else{
            return -1;
        }
    }

    // Function to remove an element from top of the stack2.
    int pop2() {
        // code here
        if(top2<size){
            int y = arr[top2];
            top2++; 
            return y;
        }
        else{
            return -1;
        }
        
    }
};
