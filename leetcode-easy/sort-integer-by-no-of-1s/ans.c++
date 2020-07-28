class Solution {

public:
  static  int bits_count(unsigned int u)
{
     unsigned int uCount;

     uCount = u - ((u >> 1) & 033333333333) - ((u >> 2) & 011111111111);
     return ((uCount + (uCount >> 3)) & 030707070707) % 63;
}
    static bool cmp(const int &a,const int &b){
        int x = bits_count(a);
        int y = bits_count(b);
        if(x<y) return true;
        if(x>y) return false;
        return a<b;
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),cmp);
        return arr;
    }
};
