// MINIMISE XOR PROBLEM

class Solution {
public:
    
    long long binaryToDecimal(string n)
{
    string num = n;
    long long dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    long long base = 1;
 
    long long len = num.length();
    for (long long i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
 
    return dec_value;
}
    
    
    int minimizeXor(int num1, int num2) {
        string str1 = "";
        int st = 0;
        for (int i = 31; i >= 0; i--) {
            int k = num1 >> i;
            if (k & 1)
            {
                str1 += "1";
                
            }
            else
                str1 += "0";
        }
        
        
        cout<<str1<<endl;
        
        
        string str2 = "";
        for (int i = 31; i >= 0; i--) {
            int k = num2 >> i;
            if (k & 1)
            {
                str2 += "1";
                st++;
            }
            else
                str2 += "0";
        }
        
        cout<<str2<<endl;
        
        
        string ans = "";
        for(int i = 0;i<=31;i++){
            if(str1[i] == '1' && st>0){
                ans += "1";
                st--;
            }
            else{
                ans += "0";
            }
        }
        if(st>0){
            for(int i=31;i>=0;i--){
                if(ans[i] == '0' && st>0){
                    ans[i] = '1';
                    st--;
                }
                if(st == 0) break;
            }
        }
        cout<<ans<<endl;
        //reverse(ans.begin(),ans.end());
        int t = binaryToDecimal(ans);
        return t;
    }
};
