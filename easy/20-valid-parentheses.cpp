class Solution {
public:
    bool isValid(string s) {
        std::stack<char> brackt{};
        int count{};
        for (const char& c:s)
        {
            if(c=='('||c=='{'||c=='[')
            {
                count++;
                brackt.push(c);
            }
            else{
                if(brackt.empty())
                {
                    return false;
                }
                if(c==')')
                {
                    if(brackt.top()=='(')
                    {
                        count--;
                        brackt.pop();
                        continue;
                    }else{
                        return false;
                    }
                }
                if(c=='}')
                {
                    if(brackt.top()=='{')
                    {
                        count--;
                        brackt.pop();
                        continue;
                    }else{
                        return false;
                    }
                }
                if(c==']')
                {
                    if(brackt.top()=='[')
                    {
                        count--;
                        brackt.pop();
                        continue;
                    }else{
                        return false;
                    }
                }
            }
        }
        return count==0;
    }
};