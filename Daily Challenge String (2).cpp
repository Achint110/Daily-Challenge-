class Solution {
public:
    void reverseString(vector<char>& s) {
//   Method 1
// reverse(s.begin(),s.end());


// Method 2
        int S=0,e=s.size()-1;
           while(S<e){

          swap(s[S],s[e]);
          S++,e--;

           }
        

    }
};

//    Check for more method