#include <iostream>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        int num = 0;
        for(int i = 0;i < s.length(); i++){
            
            if(s[i] == 'I') {num = num + 1; }
            else if (s[i] == 'V') num = num + 5;
            else if (s[i] == 'X') num = num +10;
            else if (s[i] == 'L') num = num + 50;
            else if (s[i] == 'C') num = num + 100;
            else if (s[i] == 'D') num = num + 500;
            else if (s[i] == 'M') num = num + 1000;
             
            if(i>0){
               if((s[i] == 'V'||s[i] == 'X' ) && s[i-1] == 'I') num = num - 2;
               if((s[i] == 'L'||s[i] == 'C' ) && s[i-1] == 'X') num = num - 20;
              
               if((s[i] == 'M'||s[i] == 'D' ) && s[i-1] == 'C') num = num - 200;
              
            }
            
        }
        
        return num;
    }
};
