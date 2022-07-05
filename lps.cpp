class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length()<1)
        {
            return s;
        }
        int n=s.length(),i,start=0,maxlen=1;
        //odd length
        for(i=0;i<n-1;i++)
        {
            int l=i,r=i;
            while(l>=0 && r<n)
            {
                if(s[l]==s[r])
                {
                    l--;r++;
                }
                else
                {
                    break;
                }
            }
            int len=r-l-1;
            if(len>maxlen)
            {
                maxlen=len;
                start=l+1;
            }
        }
        
        // even length
        for(i=0;i<n-1;i++)
        {
            int l=i,r=i+1;
            while(l>=0 && r<n)
            {
                if(s[l]==s[r])
                {
                    l--;r++;
                }
                else
                {
                    break;
                }
            }
            int len=r-l-1;
            if(len>maxlen)
            {
                maxlen=len;
                start=l+1;
            }
        }
        
        return s.substr(start,maxlen);
    }
};
