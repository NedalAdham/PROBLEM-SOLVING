class Solution:
    def countAsterisks(self, s: str) -> int:
        return ''.join ([char for char in s.split('|')[::2]]).count("*")