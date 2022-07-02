class Solution:
    def minDeletions(self, s: str) -> int:
        deletions = 0
        count_limit = inf
        for count in sorted(Counter(s).values(), reverse=True):
            if count > count_limit:
                deletions += count - count_limit
                count = count_limit
            count_limit = max(0, count - 1)
        return deletions
        
        