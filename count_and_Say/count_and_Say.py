
class Solution:
    def helper( self, s: str) -> dict:
        lst = []
        count = 1
        ln = len(s)
        for _ in range(ln - 1):
            if s[_] != s[_ + 1]:
                lst.append([s[_], count])
                if _ + 2 == ln :
                    lst.append([s[_ + 1], 1])
                count = 1
            elif s[_] == s[_ + 1]:
                count += 1
                if _ + 2 == ln :
                    lst.append([s[_], count])
                    count = 1
        return lst
    
    def buildNewSting( self, lst: list) -> str:
        newString = ""
        for elem in lst:
            newString += str(elem[1])
            newString += str(elem[0])
        return newString

    def countAndSay(self, n: int) -> str:
        i = 2
        if n == 1: return "1"
        result = "11"
        while i < n:
            result = self.buildNewSting(self.helper(result))
            i += 1
        return result


def main():
    test = Solution()
    print(test.countAndSay(1))
    print(test.countAndSay(2))
    print(test.countAndSay(3))
    print(test.countAndSay(4))
    print(test.countAndSay(5))
    print(test.countAndSay(6))
    print(test.countAndSay(7))
    print(test.countAndSay(8))
    print(test.countAndSay(9))
    print(test.countAndSay(10))

main()

        