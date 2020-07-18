// time complexity : O(M*N)
// space complexity: O(1)

class Solution {

  void dfs(vector<vector<int>>&image,int sr,int sc,int newColor,int n,int m,int src)
  {
    //boundary check
    if(sr<0 or sr>=n or sc<0 or sc>=m)
    return;
    if(image[sr][sc]!=src)
    return;

    image[sr][sc]=newColor;
    dfs(image,sr-1,sc,newColor,n,m,src); //top
    dfs(image,sr+1,sc,newColor,n,m,src); //down
    dfs(image,sr,sc+1,newColor,n,m,src); //right
    dfs(image,sr,sc-1,newColor,n,m,src); //left
  }

public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
      //if the source is already having new color
      if(image[sr][sc]==newColor)
      return image;
      int n=image.size();
      int m=image[0].size();
      int src=image[sr][sc];
      dfs(image,sr,sc,newColor,n,m,src);
      return image;
    }
};
