class Solution {
public:
    bool isValid(string s) {
        std::stack<char> brackt{};
        for (const char& c:s)
        {
            if(c=='('||c=='{'||c=='[')
            {
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
                        brackt.pop();
                        continue;
                    }else{
                        return false;
                    }
                }
            }
        }
        return brackt.empty();
    }
};