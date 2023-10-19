#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  char str[100];
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin.getline(str, 100);

  char *ptr;                
  ptr = strtok(str, ", "); 
  cout << " \n Split string using strtok() function: " << endl;
  while (ptr != NULL)
  {
    cout << ptr << endl; // print the string token
    ptr = strtok(NULL, ", ");
  }

  return 0;
}