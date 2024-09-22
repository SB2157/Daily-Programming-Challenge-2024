from collections import defaultdict

def countSubstringsWithKDistinct(s: str, k: int) -> int:
    # Helper function to count substrings with at most K distinct characters
    def atMostKDistinct(k):
        count = 0
        left = 0
        freq_map = defaultdict(int)
        
        for right in range(len(s)):
            # Add the current character to the window
            freq_map[s[right]] += 1
            
            # If we have more than k distinct characters, shrink the window
            while len(freq_map) > k:
                freq_map[s[left]] -= 1
                if freq_map[s[left]] == 0:
                    del freq_map[s[left]]
                left += 1
            
            # Count substrings ending at 'right'
            count += (right - left + 1)
        
        return count

    # Return the difference between at most K distinct and at most (K-1) distinct
    return atMostKDistinct(k) - atMostKDistinct(k - 1)

# Test cases
print(countSubstringsWithKDistinct("pqpqs", 2))  # Output: 7
print(countSubstringsWithKDistinct("aabacbebebe", 3))  # Output: 10
print(countSubstringsWithKDistinct("a", 1))  # Output: 1
print(countSubstringsWithKDistinct("abc", 3))  # Output: 1
print(countSubstringsWithKDistinct("abc", 2))  # Output: 2
