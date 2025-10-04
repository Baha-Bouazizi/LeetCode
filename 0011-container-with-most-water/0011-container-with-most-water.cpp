class Solution {
public:
    int maxArea(vector<int>& height) {
        int gauche = 0;
        int droit = height.size() - 1;
        int maxA = 0;

        while (gauche < droit) {
            int h = min(height[gauche], height[droit]);
            int largeur = droit - gauche;
            int sur = h * largeur;
            maxA = max(maxA, sur);

        
            if (height[gauche] < height[droit])
                gauche++;
            else
                droit--;
        }

        return maxA;
    }
};
