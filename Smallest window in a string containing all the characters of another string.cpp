#include <bits/stdc++.h>
using namespace std;



string smallestWindow (string s, string p) {
    
        int n=s.size();
        int len=p.size();


}

signed main()
{

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++)
  {
    /* code */
    cin >> arr[i];
  }

  return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {
        //if length of string p is greater than string s then we return -1.
        if(p.length()>s.length())
        {
            return "-1";
        }
        else
        {
            //using hash tables to store the count of characters in strings.
            int shash[26]={0};
            int phash[26]={0};
            
            //storing the count of characters in string p in hash table.
            for(int i=0;i<p.length();i++)
            {
                phash[p[i]-'a']++;
            }
            
            int counter=0;
            int begin=0;
            int startindex=-1;
            int length=0;
            int minlength=INT_MAX;
            for(int i=0;i<s.length();i++)
            {
                //storing the count of characters in string s in hash table.
                shash[s[i]-'a']++;
                
                //if count of current character in string s is equal to or less 
                //than in string p, we increment the counter.
                if(phash[s[i]]-'a'!=0&&shash[s[i]-'a']<=phash[s[i]-'a'])
                {
                    counter++;
                }
                
                //if all the characters are matched
                if(counter==p.length())
                {
                    //we try to minimize the window.
                    while(shash[s[begin]-'a']>phash[s[begin]-'a']||phash[s[begin]-'a']==0)
                    {
                        if(shash[s[begin]-'a']>phash[s[begin]-'a'])
                        shash[s[begin]-'a']--;
                        begin++;
                    }
                    //updating window size.
                    length=i-begin+1;
                    if(length<minlength)
                    {
                        //if new minimum sub-string is found, we store value
                        //of its starting index for new found window.
                        startindex=begin;
                        minlength=length;
                    }
                    
                }
            }
            
            //returning the smallest window or -1 if no such window is present.
            if(startindex==-1)
                return "-1";
            else
                return s.substr(startindex,minlength);
        }
    }
};

*/



// ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {
        // Your code here
        if(s.length() < p.length()){
            return "-1";
        }
        vector<int> mp(26, 0);
        int count = 0;
        for(int i=0; i<p.length(); i++){
            if(mp[p[i]-'a'] == 0){
                count++;
            }
            mp[p[i]-'a']++;
        }
        
        int i = 0, j = 0;
        int len = INT_MAX;
        int start = 0;
        while(j < s.size()){
            mp[s[j]-'a']--;
            if(mp[s[j]-'a'] == 0){
                count--;
            }
            
            if(count == 0){
                while(count == 0){
                    mp[s[i]-'a']++;
                    if(mp[s[i]-'a'] == 1){
                        count++;
                    }
                    if(len > j-i+1){
                        len = j-i+1;
                        start = i;
                    }
                    i++;
                }
            }
            j++;
        }
        if(len == INT_MAX){
            return "-1";
        }
        return s.substr(start, len);
    }
};

*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////




/*


class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {
        // Your code here
        vector<int> m(26, 0);
        vector<int> pre(26, 0);
        
        for(int i=0;i<p.length();i++)
        {
            pre[p[i] - 'a'] = 1;
        }
        for(int i=0;i<p.length();i++)
        {
            m[p[i] - 'a']++;
        }
        int count = 0;
        for(int i=0;i<26;i++)
        {
            if(m[i] > 0)
            {
                count++;
            }
        }
        
        int start = 0;
        
        int ans = INT_MAX;
        int a = -1;
        int b = -1;
        for(int i=0;i<s.length();i++)
        {
            if(pre[s[i]-'a'] == 1)
            {
                m[s[i]-'a']--;
                if(m[s[i]-'a'] == 0)
                {
                    count--;
                    while(count == 0)
                    {
                        if(ans > i-start+1)
                        {
                            ans = i-start+1;
                            a = start;
                            b = i;
                        }
                        if(pre[s[start]-'a'] == 1)
                        {
                            m[s[start]-'a']++;
                            if(m[s[start]-'a'] == 1)
                            {
                                count++;
                            }
                        }
                        start++;
                    }
                }
            }
        }
        if(a == -1)
        {
            return "-1";
        }
        else
        {
            return s.substr(a,b-a+1);
        }
    }
};

*/