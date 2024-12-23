/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void solveStack(stack<int>&s , int num){
    if(s.empty() || (!s.empty()) && s.top()<num){
        s.push(num);
        return;
    }
    
    int x=s.top();
    s.pop();
    
    solveStack(s,num);
    s.push(x);
}

void SortedStack :: sort()
{
   //Your code here
   if(s.empty()){
       return;
   }
   
   int num=s.top();
   s.pop();
   
   sort();
   
   solveStack(s,num);
   
}
