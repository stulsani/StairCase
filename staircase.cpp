#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    int symbol = n;
    for(int i = 0;i < n;i++)
    {
      int space = symbol-1;
      for(int j = 0;j < n;j++)
      {
         if(j == space || j > space)
         {
            cout << "#";
         }
         else
         {
             cout << " ";
         }
      }
      --symbol;
      cout << endl;
    }
    return 0;
}

