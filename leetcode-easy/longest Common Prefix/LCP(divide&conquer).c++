/*

time complexity : O(MN)

space complextity:O(MlogN)



*/


class Solution {
  string lcp(string s,string t)
  {
    int n=s.length();
    int m=t.length();

    string ans;

    for(int i=0,j=0;i<n and j<m;++i,++j)
    {
      if(s[i]!=t[j])
      return ans;
      ans.push_back(s[i]);
    }

    return ans;

  }

  string Dc(vector<string>&strs,int low,int high)
  {
    if(low==high)
    return strs[low];
    if(high>low)
    {
      int mid=low+(high-low)/2;
      string str1=Dc(strs,low,mid);
      string str2=Dc(strs,mid+1,high);
      return lcp(str1,str2);
    }

      return "";
  }
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        return Dc(strs,0,n-1);
    }
};
