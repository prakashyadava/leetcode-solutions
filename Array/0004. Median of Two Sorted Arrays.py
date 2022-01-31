class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        arr = nums1 + nums2
        arr.sort()
        l = len(arr)
        b =l/2
        b = int(b)
        if l%2 !=0:
            return float(arr[b])
        else:
            a = arr[b] + arr[b-1]
            return a/2
        
