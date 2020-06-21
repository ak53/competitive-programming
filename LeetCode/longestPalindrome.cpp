class Solution {
public:
    
    string longestPalindrome(string s) {
        int max=0;
        string ans;
        int n=s.length();
        for (int i=0;i<n;i++){
            if (i<n-1 && s[i]==s[i+1]){ //even case
                string res1=check(s,i,i+1);
                if (res1.length()>max){
                    max=res1.length();
                    ans=res1;
                }
            }
            string res2=check(s,i,i);
            if (res2.length()>max){
                max=res2.length();
                ans=res2;
            }
        }
        return ans;
    }
    
private:
    string check(string s, int st,int e){
        while(true){
            if (st>0 && e<s.length()-1 && s[st-1]==s[e+1]){
                st--;
                e++;
            }else{
                break;
            }
        }
        string str;
        str=s.substr(st,e-st+1);
        return str;
    }
};