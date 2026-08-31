class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        
        if len(strs)>1:
            prefix=[]
            new_strs = sorted(strs,key=len)
            smallest_str= new_strs[0]

            for i in range(len(smallest_str)):
                char_present=False
                for j in range(1,len(new_strs)):
                    if new_strs[j][i]==smallest_str[i]:
                        char_present=True
                    else:
                        return "".join(prefix)
                if char_present:
                    prefix.append(smallest_str[i])
                else:
                    return "".join(prefix)
        
            return "".join(prefix)
        else:
            return strs[0]


                   
        
       
