class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> o;
        bool f;
        string s;
        for (int i=1;i<=n;i++){
            s="";
            f=false;
            if (i%3==0){
               s+="Fizz";
                f=true;
            }if (i%5==0){
                s+="Buzz";
                f=true;
            }if (!f){
                s=to_string(i);
            }
            o.push_back(s);
        }
        return o;
    }
};