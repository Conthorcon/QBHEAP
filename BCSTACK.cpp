#include <bits/stdc++.h>
#include<stack>
using namespace std;
string s;
long i;
stack <string> a;
void doc()
{ getline(cin,s);
}
void xuli()
{	doc();
	while (s!="end")
	{	if(s=="init")
		{	if(!a.empty())	while(!a.empty()) a.pop();
		}
		else if(s=="pop") 
		{	if(!a.empty()) a.pop();
//			else cout<<-1<<endl;
		}
		else if(s=="top")
		{	if(!a.empty()) cout<<a.top()<<endl;
			else cout<<-1<<endl;
		}
		else if(s=="size")
		{	if(!a.empty()) cout<<a.size()<<endl;
			else cout<<0<<endl;
		}
		else if(s=="empty")
		{	cout<<a.empty()<<endl;
		
		}
		else
		{	s.erase(0,5);
			a.push(s);
		}			
			doc();	
	}
}
int main()
{	freopen("BCSTACK.inp","r",stdin);
	freopen("BCSTACK.out","w",stdout);
	xuli();
	return 0;
}
