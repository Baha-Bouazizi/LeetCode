class Solution {
public:
    // Fonction qui applique le remplacement d'un chiffre x par y dans une string s
    int remplacer(string s, char x, char y) {
        for (char& c : s) {
            if (c == x) c = y;
        }
        // S'assurer que le nombre ne commence pas par 0
        if (s[0] == '0') return 0;
        return stoi(s);
    }

    int maxDiff(int num) {
        string s = to_string(num);
        int max_val = num;
        int min_val = num;

        // Maximiser le nombre en remplaçant un chiffre par 9
        for (char x = '0'; x <= '9'; ++x) {
            int temp = remplacer(s, x, '9');
            max_val = max(max_val, temp);
        }

        // Minimiser le nombre en remplaçant un chiffre par 1 (si c'est le premier), sinon 0
        for (char x = '0'; x <= '9'; ++x) {
            char y = (s[0] == x) ? '1' : '0';
            int temp = remplacer(s, x, y);
            if (temp != 0) {
                min_val = min(min_val, temp);
            }
        }

        return max_val - min_val;
    }
};
