class Solution:
    def scheduleCourse(self, courses) -> int:
        courses.sort(key=lambda x: x[1])
        cur_time = ans = 0
        heap = []

        for time, deadline in courses:
            while heap and time < -heap[0] and time + cur_time > deadline:
                cur_time += heapq.heappop(heap)
            if time + cur_time <= deadline:
                heapq.heappush(heap, -time)
                cur_time += time
                ans = max(ans, len(heap))
        return ans


