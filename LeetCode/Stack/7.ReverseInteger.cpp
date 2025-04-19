class Solution {
public:
    int reverse(int x) 
    {
        stack <char> nums;

        string str = to_string(x);
        int result = 0;
        int sign = 1;

        for (char ch : str)
            nums.push(ch);

        while (!nums.empty())
        {
            if (nums.top() == '-')
                sign = -1;
            else
            {
                int digit = nums.top() - '0';
                if (result > (INT_MAX - digit) / 10)
                    return 0;
                result = result * 10 + digit;
            }
            nums.pop();
        }

        return result * sign;

    }
};