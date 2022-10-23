class Solution {
public:
    char toLower(char ch){
    if((ch>='a' && ch<='z') || (ch>='0'&& ch<='9')){
        return ch;
    }else{
       char temp =  ch - 'A' +'a';
       return temp;
    }
}
    
    bool isValid(char ch){
        if( (ch >='a' && ch <='z') || (ch >='A' && ch <='Z') || (ch >='0' && ch <='9') )
        {
            return 1;    
        }
        return 0;
    }
    
    //check palindrome
    bool checkPalindrome(string str){
    int s=0;
    int e=str.length()-1;

    while(s<e){
        if(str[s]!= str[e]){
            return false;
        }
        else{
            s++;
            e--;
        }
    }
    return true;
}
    
    
    bool isPalindrome(string s) {
        
        //remove faltu no.
        string temp ="";
        for(int i=0;i<s.length();i++){
            if(isValid(s[i])){
                //char lower case
                s[i] = toLower(s[i]);
                //push to temp named string
                temp.push_back(s[i]);
           }
        }
        
        // check palindrome
        return checkPalindrome(temp);
        
        
    }
};