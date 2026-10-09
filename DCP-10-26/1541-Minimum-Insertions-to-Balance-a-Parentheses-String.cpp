class Solution {
public:
    int minInsertions(string s) {
        int a=0,o=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                o++;
            }else{
                if(i+1<s.size()&& s[i+1]==')'){
                i++;
            }else{
                a++;
            }
            if(o>0){
                o--;
            }else{
                a++;
            }
        }
        }
        return a+2*o;
    }
};