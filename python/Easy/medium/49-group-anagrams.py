class Solution:
    def groupAnagrams(self, strs: list[str]) -> list[list[str]]:
        ans = []
        d={}
        for i in strs:
            key = "".join(sorted(i))
            if key in d:
                d[key].append(i)
            else:
                d[key]=[]
                d[key].append(i)
        return list(d.values())
