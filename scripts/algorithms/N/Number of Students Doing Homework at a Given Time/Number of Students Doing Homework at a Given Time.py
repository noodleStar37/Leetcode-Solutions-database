class Solution(object):
    def busyStudent(self, startTime, endTime, queryTime):
        res = 0
        for i in range(len(startTime)):
            if startTime[i] <= queryTime <= endTime[i]:
                res += 1
            else:
                pass
        return res
