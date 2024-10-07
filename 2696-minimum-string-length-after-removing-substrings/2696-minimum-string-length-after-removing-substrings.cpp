class Solution {
public:
    int minLength(string s) {
        while(s.find("AB") != string::npos || s.find("CD") != std::string::npos){
          size_t pos = s.find("AB");
           if (pos != std::string::npos) {
        s.erase(pos, 2);
    }
              size_t poss = s.find("CD");
           if (poss != std::string::npos) {
        s.erase(poss, 2);
    }
       
    }
         return s.size() ;
    }
};