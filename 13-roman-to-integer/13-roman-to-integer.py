class Solution:
    def romanToInt(self, s: str) -> int:
        res, i = 0, 0
        map = {
            'I': 1,
            'IV': 4,
            'V': 5, 
            'IX': 9, 
            'X': 10,
            'XL': 40,
            'L': 50, 
            'XC': 90,
            'C': 100,
            'CD': 400,
            'D': 500,
            'CM': 900,
            'M': 1000
              }
        
#         while i < len(s):
#             if s[i:i+2] in map:
#                 res += map[s[i:i+2]]
#                 i += 2
#             else:
#                 res += map[s[i]]
#                 i += 1
        
#         return res  
        while i < len(s):
            if s[i:i+2] in map:
                res += map[s[i:i+2]]
                i+=2
            else:
                res += map[s[i]]
                i+=1
        return res