// https://www.hackerrank.com/challenges/encryption/problem

#include <bits/stdc++.h>

using namespace std;

// Complete the encryption function below.
string encryption(string s) {
 int i, len, j;
    len = s.size() ;
    for( i = 0; i < len; i++)
    {
        if (s[i] == ' ')
        {
            for (j = i; j < len; j++)
                s[j] = s[j+1];
            len--;
        }
    }
    int sm= floor(sqrt(len));
    int lg= ceil(sqrt(len)) ;
    if( (sm*lg)< len)
        sm = sm+1 ;

    char st[sm][lg];
    int k=len;
    for(i=0; i<sm; i++)
    {
      for(j=0; j<lg ; j++)
      {
         st[i][j] = s[len-k] ;
         k-- ;
      }
    }
    string ans="" ;
    for(i=0; i<lg; i++)
    {
      for(j=0; j<sm; j++)
      {
        if(st[j][i]=='\0')
        {

        }
        else 
          ans = ans + st[j][i] ;
      }
       ans=ans+" " ;
    }
    return ans ;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
