class Solution {
public:
    long long reverse( long long x) 
    {
        long long revN=0;
        while(x!=0)
        {
            long long lastdigit= x%10;
            x=x/10;
            revN= (revN*10)+lastdigit;
            if (revN > INT_MAX || revN < INT_MIN) {
            return 0;
            }
        }
        // cout<<revN;
        return revN;
    }
};