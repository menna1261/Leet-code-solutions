class Solution {
public:
    int lengthOfLastWord(string s) {
        stack<char>stk;
        for(int i= 0;i <s.size();i++){
            if(s[i]==' '){
                stk.push('#');
            }
            else
                stk.push(s[i]);
        }
        rem(stk,s.size());
        int counter = 0 ;
        while((!stk.empty())&&(stk.top()!='#')){
            stk.pop();
            counter++;
        }
        return counter;
        
    }
    
    void rem(stack<char>&stk , int len){
        while((!stk.empty())&&(stk.top()=='#')){
            stk.pop();
        }
        
    }
};