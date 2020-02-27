#include<iostream>
#include<regex>
using namespace std;

class book
{
	private:
		int count,i;
	    string str[100];
	    string temp;
	public:
		string c;
		int input();
		bool compare(string);
		int decision();
};

int main()
{
	book alpha;
	alpha.input();
	alpha.compare(alpha.c);
	alpha.decision();



}

bool book::compare(string c)
{
    return std::regex_match(token, std::regex("(\\+|-)?[0-9]*(\\.?([0-9]+))$"));	
}

int book::input()
{
	for(count=0;;count++)
	{
		cin>>str[count];
		if(cin.get()=='\n')
		{
			count--;
			break;
			
		}
		
	}
}

void book::decision()
{
	for(i=0;i<count;i++)
	{
		temp = str[i];
		if(compare(temp))
		{
			cout<<"number";
		}
		else
		{
			cout<<"string";
		}
	}
}



