class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        l=[0]*26
        d = l.copy()
        for i in s:
            l[ord(i)-ord('a')]+=1
        for i in t:
            l[ord(i)-ord('a')]-=1
        return l==d