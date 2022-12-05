class Solution 
{
public:
    bool halvesAreAlike(string s) 
    {
        int i = 0,c=0,d=0;
        int len = s.length();
        for(i =0 ; i < len/2 ; i++ )
        {
            if(s[i]== 'a' || s[i]== 'e' || s[i]== 'i' ||s[i]== 'o' || s[i]== 'u'|| s[i]== 'A' || s[i]== 'E' ||                         s[i]== 'I' ||s[i]== 'O' || s[i]== 'U' )
                 c = c+1;
        }
        for(i = len/2 ; i < len  ; i++ )
        {
            if(s[i]== 'a' || s[i]== 'e' || s[i]== 'i' ||s[i]== 'o' || s[i]== 'u'|| s[i]== 'A' || s[i]== 'E' ||                         s[i]== 'I' ||s[i]== 'O' || s[i]== 'U' )
               d = d+1;
        }
        if(c==d)
            return true;
        else
            return false;
        
        
    }
};