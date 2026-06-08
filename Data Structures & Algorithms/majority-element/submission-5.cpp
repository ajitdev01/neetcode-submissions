class Solution {
public:
  
// Boyer–Moore Voting Algorithm
int majorityElement(vector<int> vec)
{
    int n = vec.size();

    int fq = 0, ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (fq == 0)
            ans = vec[i];
            
        if (vec[i] == ans)
            fq++;
        else
            fq--;
    }
    
    return ans;
     

     //// not need for this qns

    // int count = 0;
    // for (int val : vec)
    // {
    //     if (val == ans)
    //         count++;
    // }
    // if (count > n / 2)
    //     return ans;
    // else
    //     return -1;
}

};