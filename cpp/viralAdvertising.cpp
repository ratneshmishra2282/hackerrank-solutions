https://www.hackerrank.com/challenges/strange-advertising/problem

#include <bits/stdc++.h>  

using namespace std;

// Complete the viralAdvertising function below.

int viralAdvertising(int n) {
   int l=0;
   int sh = 5;
   for(int i=0; i<n; i++)
   {
     l = l + floor(sh/2) ;
     sh = floor(sh/2) * 3 ;
   }
 
   return l ;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = viralAdvertising(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
