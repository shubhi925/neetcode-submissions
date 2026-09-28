class Solution {
public:
    void swap(int a ,int b, vector<char>& s){
        char temp = s[a];
        s[a] = s[b];
        s[b] = temp;
    }
    
    void reverseString(vector<char>& s) {
        int l = 0 ;
        int r = s.size()-1;
        while(l<= r){
            swap(l,r,s);
            l++;
            r--;
        }
    }
};