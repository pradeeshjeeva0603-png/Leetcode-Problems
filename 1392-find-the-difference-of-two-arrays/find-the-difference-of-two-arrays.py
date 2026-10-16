class Solution:
    def findDifference(self, nums1: list[int], nums2: list[int]) -> list[list[int]]:
        set1=set(nums1)
        set2=set(nums2)
        answer=[]
        a1=set1-set2
        a2=set2-set1
        answer.append(list(a1))
        answer.append(list(a2))
        return answer