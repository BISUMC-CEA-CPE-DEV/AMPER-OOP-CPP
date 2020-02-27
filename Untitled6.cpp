#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;

int main ()
{
  int count,i;
  char str[100];
  char *pch;
  
  for(count=0;;count++)
  {
  	gets(str);
  	if(cin.get()=='\n')
  	{
  		break;
	  }
  }
  cout<<"\n"<<"tokens: ";
  
  for(i=0;i<count;i++)
  {
   char temp = str[i];
   pch = strtok (temp, "1");
  
  while (pch != NULL)
  {
    cout<<pch;
    pch = strtok (NULL, " ,.-");
  }
  
  
  }
  return 0;
}
