#include<bits/stdc++.h>
using namespace std;
queue<string> p;
vector<string> v;
void run()
{
	p.push("1");
	v.push_back("1");
	while (v.size()<10000)
	{
		string top=p.front();p.pop(	);
		p.push(top+"0");
		v.push_back(top+"0");
		p.push(top+"1");
		v.push_back(top+"1");
	}
}

int main ()
{
	run();
	int t;cin>>t;
	while (t--)
	{
		int n,dem=0;cin>>n;
		for (string x:v)
		{
			if (stoll(x)>n) break;
			else dem++;
		}
		cout << dem<< endl;
	}
}

