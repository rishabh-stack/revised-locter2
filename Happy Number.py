class Solution:
    def isHappy(self, n: int) -> bool:
        visited=[]
        a=[int(i) for i in str(n)]
        while True:
            p=0
            for i in a:
                p+=i**2
            a=[]
            a=[int(i) for i in str(p)]
            if len(a)==1 and a[0]==1:
                return True
            elif p in visited:
                return False
            visited.append(p)
