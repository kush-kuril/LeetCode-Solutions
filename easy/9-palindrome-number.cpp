class Solution {
public:
    bool isPalindrome(int x) {
        int dih{x};
        int num{x};
        int count{};
        
        if (num<0)
        {
            return false;
        }
        while(num>0)
        {
            num/=10;
            count++;
        }
        if (x==0||count==1){return true;}
        long long int r{};
        while((x) >0)
        {
            r=r*10+(x%10);
            x=x/10;
            count--;

        }
        if (r==dih)
            return true;
        
        return false;
        

       

    }
};