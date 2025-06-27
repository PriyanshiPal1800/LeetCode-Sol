class Solution {
public:
    int romanToInt(string s) {
        int sum=0,i;
        int roman[128]={};
        roman['I']=1;
        roman['V']=5;
        roman['X']=10;
        roman['L']=50;
        roman['C']=100;
        roman['D']=500;
        roman['M']=1000;
        for(i=0;i<s.length();i++)
        {
            if(roman[s[i]]<roman[s[i+1]])
                sum-=roman[s[i]];
            else 
                sum+=roman[s[i]];
        }
        sum+=roman[s[i]];
        return sum;
    }
};