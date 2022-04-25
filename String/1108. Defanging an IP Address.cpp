class Solution {
public:
    string defangIPaddr(string address) {
        //this is first step
        //return regex_replace(address, regex("."), "[.]");
        //return std::regex_replace(address, std::regex("[.]"), "[.]"); 
        //this is second step
        string res;
        for(auto c: address) {
            if(c=='.') {
                res+="[.]";
            } else res+=c;
        }
        return res;
    }
};