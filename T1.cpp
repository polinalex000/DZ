#include <iostream>
#include <string>
#include <cctype>

using namespace std;


string task1b(string str)
{
  string res;
  if (str.length()>=1)
  {
    res.push_back(str[0]);
  }

  for (size_t i = 1; i < str.length(); i++)
  {
    if (!(str[i]=='b' && str[i-1]=='c'))
    {
      res.push_back(str[i]);
    }
  }
  return res;
}


int main(){

   string s;
   getline(cin, s);

   string s2 = task1b(s);

   cout << s2;
}
