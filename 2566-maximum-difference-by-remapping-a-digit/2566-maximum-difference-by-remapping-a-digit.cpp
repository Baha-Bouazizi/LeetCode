class Solution {
public:
    int minMaxDifference(int num) {
      string s = to_string(num);
    int max_val = num;
    int min_val = num;

    // Try to get maximum by replacing one digit with '9'
    for (char d : set<char>(s.begin(), s.end())) {
        if (d != '9') {
            string temp = s;
            replace(temp.begin(), temp.end(), d, '9');
            max_val = max(max_val, stoi(temp));
        }
    }

    // Try to get minimum by replacing one digit with '0'
    for (char d : set<char>(s.begin(), s.end())) {
        if (d != '0') {
            string temp = s;
            replace(temp.begin(), temp.end(), d, '0');
            min_val = min(min_val, stoi(temp));
        }
    }

    return max_val - min_val;   
    }
};