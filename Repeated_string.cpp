#include <cmath>
#include <string>
#include <climits>
#include <cstring>
#include <iostream>

using namespace std;
//Repeated string 

int main()
{
   string s;
   cin >> s;//string user input
   long long n;//Given integer n//
   cin >> n;
   long long count_a=0;//counts no of 'a' in string
   for(int i=0;i<s.size();i++)
   {
       if(s[i]=='a')
          count_a++;
   }
   long long result = (n/s.size())*count_a;//count no of 'a' in infinite string s
   //counts leftout 'a' in string
   for(int i=0;i<n%s.size();i++)
   {
       if(s[i]=='a')
          result++;
   }
   cout << result; 
   return 0;
   
}
