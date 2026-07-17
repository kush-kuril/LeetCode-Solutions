class Solution {
public:
    int calPoints(vector<string>& operations) {
        std::stack<int> records{};
        for (const auto& c : operations) {
            if (c == "+") {
                
                int i = records.top();
                records.pop();
                int j = records.top();
                records.push(i);
                records.push(j + i);
            } else if (c == "D") {
                records.push(2 * records.top());
            } else if (c == "C") {
                records.pop();
            } else {
                records.push(std::stoi(c));
            }
        }
        int sum{};
        while (!records.empty()) {
            sum = sum + records.top();
            records.pop();
        }
        return sum;
    }
};