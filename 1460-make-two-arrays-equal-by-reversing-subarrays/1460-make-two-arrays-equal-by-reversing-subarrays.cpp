class Solution {
public:
    bool canBeEqual(std::vector<int>& target, std::vector<int>& arr) {
        // Vérifier si les deux vecteurs ont la même taille
        if (target.size() != arr.size()) {
            return false;
        }

        // Utiliser un unordered_map pour compter les occurrences des éléments
        std::unordered_map<int, int> targetCount, arrCount;

        for (int num : target) {
            ++targetCount[num];
        }
        for (int num : arr) {
            ++arrCount[num];
        }

        // Comparer les deux maps
        return targetCount == arrCount;
    }
};