class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        a=''
        c=0
        for i in s:
            if i in a:
                a=a[a.index(i)+1:]
                a+=i
            else:
                a+=i
                c=max(c,len(a))
        return c
