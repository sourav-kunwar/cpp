int lengthOfLastWord(string s) {
        int len = s.size() - 1;
        int x = 0;
        while(len >= 0)
        {
            if(isalpha(s[len]))
            {
                x++;
                len--;
            }
            else{
                if(x!=0)
                break;
                else
                len--;
            }
        }
        return x;
    }