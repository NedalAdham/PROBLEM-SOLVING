class Solution:
    def isPossible(self, target) -> bool:
        heap, sum = [], 0

        def push(x):
            heapq.heappush(heap, -x)

        def pop():
            return -heapq.heappop(heap)

        for n in target:
            sum += n
            push(n)

        while True:
            maxelement = pop()
            subSum = sum - maxelement

            if maxelement == 1 or subSum == 1: return True
            if subSum <= 0 or maxelement <= subSum or maxelement % subSum == 0: return False

            nextToPush = maxelement % subSum
            sum = sum - maxelement + nextToPush
            push(nextToPush)

