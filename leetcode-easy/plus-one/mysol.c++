class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        if(digits[n-1]!=9)
            {
                    digits[n-1]+=1;
                    return digits;   
            }
            else
            {
                long long int count=0;
                for(int i=n-1;i>=0;i--)
                {
                    if(digits[i]==9)
                        count++;
                    else
                        break;
                    
                }
                if(count==n)
                {
                    vector<int>temp;
                    temp.push_back(1);
                    for(int i=0;i<n;++i)
                        temp.push_back(0);
                    return temp; 
                }
              
               
                
               for(int i=n-1;i>=0;--i)
               {
                   if(digits[i]==9)
                       digits[i]=0;
                   else
                   {
                       digits[i]+=1;
                       return digits;
                   }
               }
                
            }
        return digits;
        
    }
};
