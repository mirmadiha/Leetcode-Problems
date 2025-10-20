class twoStacks {
  public:
  int arr[100];
  int index1=-1;
  int n=100;
  int index2=n;

    twoStacks() {}

    // Function to push an integer into the stack1.
    void push1(int x) {
        // code here
        index1++;
        arr[index1]=x;
        
    }

    // Function to push an integer into the stack2.
    void push2(int x) {
        // code here
        index2--;
        arr[index2]=x;
    }

    // Function to remove an element from top of the stack1.
        
    int pop1() {
        // code here
        if(index1==-1){
            return -1;
        }
        int num=arr[index1];
        index1--;
        return num;
    }

        
    // Function to remove an element from top of the stack2.
    int pop2() {
        // code here
        if(index2==100){
            return -1;
        }
        int num=arr[index2];
        index2++;
        return num;
    }
};
