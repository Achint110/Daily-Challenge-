class Solution {
public:
    int scoreOfString(string s) {
        int sum=0;
        for(int i=0;i<s.size()-1;i++){
           int one=s[i];
           int two=s[i+1];
           sum=sum+abs(one -two);
          

        }
      return sum;
    }
};