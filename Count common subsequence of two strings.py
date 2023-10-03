def count_common_subsequences(S, T):
    m, n = len(S), len(T)
    dp = [[0] * (n + 1) for _ in range(m + 1)]

    for i in range(m + 1):
        dp[i][0] = 1

    for i in range(1, m + 1):
        for j in range(1, n + 1):
            dp[i][j] = dp[i - 1][j]
            if S[i - 1] == T[j - 1]:
                dp[i][j] += dp[i - 1][j - 1]

    return dp[m][n]

# Example usage
S1 = "ajblqcpdz"
T1 = "aefcnbtdi"
print(count_common_subsequences(S1, T1))  # Output: 11

S2 = "a"
T2 = "ab"
print(count_common_subsequences(S2, T2))  # Output: 1
