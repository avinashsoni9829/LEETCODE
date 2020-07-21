class Solution {
  int findMinLength(vector<string>&strs,int n)
{
    int min = INT_MAX;

    for (int i=0; i<=n-1; i++)
        if (strs[i].length() < min)
            min = strs[i].length();
    return(min);
}

bool allContainsPrefix(vector<string>&strs int n, string str,
                       int start, int end)
{
    for (int i=0; i<=n-1; i++)
        for (int j=start; j<=end; j++)
            if (strs[i][j] != str[j])
                return (false);
    return (true);
}

string commonPrefix(vector<string>&strs, int n)
{
    int index = findMinLength(strs, n);
    string prefix; // Our resultant string

    // We will do an in-place binary search on the
    // first string of the array in the range 0 to
    // index
    int low = 0, high = index;

    while (low <= high)
    {
        // Same as (low + high)/2, but avoids overflow
        // for large low and high
        int mid = low + (high - low) / 2;

        if (allContainsPrefix (arr, n, arr[0], low, mid))
        {
            // If all the strings in the input array contains
            // this prefix then append this substring to
            // our answer
            prefix = prefix + strs[0].substr(low, mid-low+1);

            // And then go for the right part
            low = mid + 1;
        }

        else // Go for the left part
            high = mid - 1;
    }

    return (prefix);
}
public:
    string longestCommonPrefix(vector<string>& strs) {

      return commonPrefix(strs,strs.size());

    }
};
