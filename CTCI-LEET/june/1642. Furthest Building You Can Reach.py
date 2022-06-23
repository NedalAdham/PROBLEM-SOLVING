class Solution:
    def furthestBuilding(self, heights, bricks, ladders):
        N = len(heights)
        heap = []

        def push (x):heapq.heappush(heap , -x)
        def pop () : return -heapq.heappop(heap)

        for i in range (N - 1):
            if heights[i] < heights [ i + 1 ] :
                needed =  heights[i + 1] - heights[i]
                push(needed)
                bricks -= needed

                while ladders > 0 and len(heap) > 0 and bricks < 0 :
                    ladders -= 1
                    bricks += pop()
                if bricks < 0 : return i
        return N-1
