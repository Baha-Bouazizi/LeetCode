class Solution {
public:
    const int MOD = 1000000007;
    const int MAX = 100005;

    vector<long long> factorial;
    vector<long long> inverseFactorial;

    long long power(long long base, long long exponent) {
        long long result = 1;
        base %= MOD;
        while (exponent > 0) {
            if (exponent % 2 == 1)
                result = result * base % MOD;
            base = base * base % MOD;
            exponent /= 2;
        }
        return result;
    }

    void computeFactorials(int limit) {
        factorial[0] = 1;
        for (int i = 1; i <= limit; ++i)
            factorial[i] = factorial[i - 1] * i % MOD;

        inverseFactorial[limit] = power(factorial[limit], MOD - 2);
        for (int i = limit - 1; i >= 0; --i)
            inverseFactorial[i] = inverseFactorial[i + 1] * (i + 1) % MOD;
    }

    long long combination(int n, int k) {
        if (k < 0 || k > n)
            return 0;
        return factorial[n] * inverseFactorial[k] % MOD *
               inverseFactorial[n - k] % MOD;
    }

    int countGoodArrays(int n, int m, int k) {
        vector<long long> fact(MAX);
        factorial = fact;
        vector<long long> inv(MAX);
        inverseFactorial = inv;
        computeFactorials(n);

        long long choosePositions = combination(n - 1, k);
        long long waysToFillDifferent = power(m - 1, n - 1 - k);

        return m * choosePositions % MOD * waysToFillDifferent % MOD;
    }
};