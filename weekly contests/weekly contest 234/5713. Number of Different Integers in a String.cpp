class Solution {
public:
    
    bool f(char c)
    {
          if(c=='0' or c=='1' or c=='2' or c=='3' or c=='4' or c=='5' or c=='6' or c=='7' or c=='8' or c=='9')
              return true;
        
        return false;
    }
    int numDifferentIntegers(string word) {
         
        set<string>s;
        
        int n=word.length();
        
        for(int i=0;i<n;++i)
        {
              if(f(word[i]))
              {
                    string temp;
                    while(f(word[i]) and i<n)
                    {
                         temp+=word[i];
                         i+=1;
                    }
                    
                    if(temp.length()>1 and temp[0]=='0')
                    {
                          string curr;
                        
                          int j=0;
                        
                          while(j<(int)temp.length() and temp[j]=='0')
                              j++;
                        
                          while(j<(int)temp.length())
                          {
                               curr+=temp[j];
                               j++;
                          }
                        
                        s.insert(curr);
                    }
                    else
                    {
                        s.insert(temp);
                    }
              }
        }
        
        
    
        
        return (int)s.size();

        
    }
};
