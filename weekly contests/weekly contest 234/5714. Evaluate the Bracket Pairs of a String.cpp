class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        
        string ans;
        map<string,string>mp;
        
        int n=knowledge.size();
        
        for(int i=0;i<n;++i)
        { 
            vector<string>temp=knowledge[i];
            
          
              
            mp[temp[0]]=temp[1];
        }
        
        
        int nn=s.length();
        
        for(int i=0;i<nn;++i)
        {
               if(s[i]=='(')
               {
                    string curr;
                   i+=1;
                      while(s[i]!=')' and i<nn)
                      {
                           
                            curr+=s[i];
                          i+=1;
                           
                      }
                    
                     
                   
                   
                    
                     if(mp[curr]=="")
                         ans+="?";
                     else
                         ans+=mp[curr];
                    
               }
            if(s[i]!=')' and s[i]!='(')
            ans+=s[i];
        }
        
         return ans;
    }
   
    
        
        
        
    };
