class Solution {
public:
    std::string addBinary(std::string a, std::string b) {
        std::string res = "";
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) sum += a[i--] - '0';  
            if (j >= 0) sum += b[j--] - '0';

            res = char(sum % 2 + '0') + res;  
            carry = sum / 2;                
        }

        return res;
    }
};
