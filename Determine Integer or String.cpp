#include<iostream>
using namespace std;

bool compare(string c)
{
	for(int i; i<c.length();i++)
	{
		if(isdigit(c[i])==false)
		{
			return false;
		}		
	}
	return true;
}



int main()
{
	int i,count,num_count=0,word_count=0;
	float num[i];
	string str[100],temp,word[i];
	
	cout<<"enter: ";
	
	for(i=0;;i++)
	{
		cin>>str[i];
		if(cin.get()=='\n')
		{
			count = i;
			break;
		}
	}
	
	for(i=0;i<=count;i++)
	{
		temp = str[i];
		if(compare(temp))
		{
			cout<<"integer ";
		}
		else
		{
			cout<<"string ";
		}
	}
	
	return 0;
}
