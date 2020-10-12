class Solution {
public:
    string removeDuplicateLetters(string s) {
vector<int> vec(26);
vector<int> visited(26);
for(int i=0;i<s.size();i++)
{
int ch;
ch=s[i];
vec[ch-97]=vec[ch-97]+1;

    }
    
    stack<char>st;
    int i=0;
    
    while(i<s.size())
    {   
        if(st.empty())
        {
            st.push(s[i]);
            if(vec[s[i]-97]>0)
                vec[s[i]-97]=vec[s[i]-97]-1;
            visited[s[i]-97]=1;
        }
        
        else
        {
            if(s[i]>st.top())
            {
                if(visited[s[i]-97]!=1)
                    {   
                        if(vec[s[i]-97]>0)
                            vec[s[i]-97]=vec[s[i]-97]-1;
                        st.push(s[i]);
                        visited[s[i]-97]=1;
                     
                    }
            }
            else
            {  
                while((!st.empty()) &&s[i]<st.top() && vec[st.top()-97]>0 && visited[s[i]-97]==0 )
                {
                    visited[st.top()-97]=0;
                    cout<<"pop="<<st.top()<<" ";
                    st.pop();
                }
                
                if(!st.empty() && s[i]<=st.top() && visited[s[i]-97]==1)
                   {
                       if(vec[s[i]-97]>0)
                            vec[s[i]-97]=vec[s[i]-97]-1;
                   }
                if(visited[s[i]-97]==0)
               {   
                    st.push(s[i]);
                    if(vec[s[i]-97]>0)
                        vec[s[i]-97]=vec[s[i]-97]-1;
                    visited[s[i]-97]=1;
               }
            }
        }
        i++;
    }
    s.clear();
    for(;!st.empty();)
    {
        s.push_back(st.top());
        st.pop();
    }
   reverse(s.begin(),s.end());
    return s;
}
};
