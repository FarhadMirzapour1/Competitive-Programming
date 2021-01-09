class Solution(object):
    def lengthOfLastWord(self, s):
        try :
            return len(s.split()[-1])
        except :
            return 0