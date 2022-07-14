class Solution:
    def candy(self, ratings: List[int]) -> int:
        n = len(ratings)
        candies = [1] * n
        for index in range(1, n):
            if ratings[index] > ratings[index - 1]:
                candies[index] = candies[index - 1] + 1
        for i in range(len(candies)-1,0,-1):
            if ratings[i-1] > ratings[i]:
                candies[i-1] = max(candies[i-1],candies[i]+1)
        return sum(candies)