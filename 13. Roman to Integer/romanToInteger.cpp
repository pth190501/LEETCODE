class Solution {
public:
    int romanToInt(string s) {
        int n = s.size();
        int ans = 0, i = n-1;
        while(i>=0){
            if(s[i]=='V' or s[i]=='X'){
                if(i>0 and s[i-1]=='I'){
                    if(s[i]=='V'){
                        ans+=4;
                    }else{
                        ans+=9;
                    }
                    i-=2;
                }else{
                    if(s[i]=='V'){
                        ans+=5;
                    }else{
                        ans+=10;
                    }
                    i-=1;
                }
            }
            else if(s[i]=='L' or s[i]=='C'){
                if(i>0 and s[i-1]=='X'){
                    if(s[i]=='L'){
                        ans+=40;
                    }else{
                        ans+=90;
                    }
                    i-=2;
                }else{
                    if(s[i]=='L'){
                        ans+=50;
                    }else{
                        ans+=100;
                    }
                    i-=1;
                }
            }
            else if(s[i]=='D' or s[i]=='M'){
                if(i>0 and s[i-1]=='C'){
                    if(s[i]=='D'){
                        ans+=400;
                    }else{
                        ans+=900;
                    }
                    i-=2;
                }else{
                    if(s[i]=='D'){
                        ans+=500;
                    }else{
                        ans+=1000;
                    }
                    i-=1;
                }
            }else{
                ans+=1;
                i--;
            }
        }
        return ans;
    }
};