class Solution
{
  public:
    vector<vector<string> > Anagrams(vector<string>& str) 
    {
         vector<vector<string>> ans;
         vector<string> temp;
       map<string,vector<string>> mp;
     for(auto x:str)
     {
         auto p=x;
         sort(p.begin(),p.end());
         mp[p].push_back(x);
     }
     int l=str.size(),i;
     for(auto x:mp)
     {
          auto p=x.second;
          for(i=0;i<p.size();i++)
          temp.push_back(p[i]);
          ans.push_back(temp);
          temp.clear();
    }
    return ans;
    }
};
