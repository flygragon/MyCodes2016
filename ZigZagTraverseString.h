class Solution {
public:
    string convert(string s, int numRows) {
        string result;
        if (s.size() ==0) return result;
        if (numRows ==1) return s;
        int len =s.size(),i=0,j=0;
        for (i =0;i <len;i +=2*(numRows-1))
        result +=s[i];
        for (i =1;i <numRows-1;i ++)
        for (j =i;j <len;j +=2*i) {
            result +=s[j];
            j +=2*(numRows-1-i);
            if (j >=len) break;
            result +=s[j];
        }
        for (;i <len;i +=2*(numRows-1))
        result +=s[i];
        return result;
    }
};