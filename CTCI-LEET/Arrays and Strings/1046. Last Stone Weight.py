class Solution:
    def lastStoneWeight(self, stones: List[int]) -> int:
        heap = [-x for x in stones]
        heapify (heap)
        while len(heap) > 1 :
            x = heappop(heap)
            y = heappop(heap)
            if x - y != 0 : heappush(heap ,(x-y))
        return abs(heap[0]) if heap else 0
