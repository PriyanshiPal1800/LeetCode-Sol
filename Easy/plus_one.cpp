class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int k=digits.size()-1,carry,i;
        vector<int> result;
        if(digits[k]+1<=9)
            {
                digits[k]+=1;
            }
        else{
            digits[k]=0;
            carry=1;
        for(i=k-1;carry==1 && i>=0;i--)
        {
            if(digits[i]!=9)
                {digits[i]+=carry;carry=0;}
            else
               digits[i]=0;
        }
        if(carry==1)
        {vector<int> result;
            result.push_back(1);
            for(int x=0;x<digits.size();x++)
               result.push_back(0);
        return result;
        }
        }
        return digits;
        }
};