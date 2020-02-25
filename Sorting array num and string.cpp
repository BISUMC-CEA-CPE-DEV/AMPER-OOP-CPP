#include<iostream>
#include<sstream>
using namespace std;


bool compare(string c)// true or false statement
{
	for(int i=0; i<c.length();i++)
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
	int i,count,ncount=0,wcount=0,nsort;
	int num[100];
	float inNumber,inNumberint;
	string str[100],temp,word[100],wsort;
	
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
		    stringstream book(temp);
			
			int x = 0;
			book >> x;
		
			num[ncount] = x;
			ncount++;
	     	}
		else
		{
		    word[wcount] = temp;
		    wcount++;
		}
	}
	
	
			for(i=0;i<ncount;i++)
			{
				for(int j=0; j<ncount-1; j++)
				{
					if(num[i] < num[j])
					{
						nsort = num[i];
						num[i] = num[j];
						num[j] = nsort;
					}
				}
			}

		    for(i=0;i<wcount;i++)
			{
				for(int j=0; j<wcount-1; j++)
				{
					if(word[i].length() < word[j].length())
					{
						wsort = word[i];
						word[i] = word[j];
						word[j] = wsort;
					}
				}
			}
	
	cout<<"\nOutput\n\n";
	for(i=0;i<ncount;i++)
	{
		cout<<num[i]<<" ";
	}
	
    for(i=0;i<wcount;i++)
	{
		cout<<word[i]<<" ";
	}
	
	return 0;
}
