class Solution {
public:
    bool isValid(string s) {
      int n=s.length();
      if(n<1) return true;
      stack<char>x;
      x.push(s[0]);
      for(int i=1;i<n;++i)
      {
        // stack empty h toh value push kar do
        if(x.empty())
        {
        x.push(s[i]);
        continue;
        }
        char c=x.top();

        //if incoming is closing bracket and opening bracket on the top of stack

         if(c=='(')
         {
           if(s[i]==')')
            x.pop();
            else
            x.push(s[i]);
         }
         else
         if(c=='[')
         {
           if(s[i]==']')
            x.pop();
            else
            x.push(s[i]);
         }
         else
         if(c=='{')
         {
           if(s[i]=='}')
            x.pop();
            else
            x.push(s[i]);
         }
         else
         return false;

      }

      if(x.empty())
      return true;

      return false;



    }
};
