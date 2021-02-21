#include<fstream>
using namespace std;
int main()
{
	fstream out;
	out.open("uid_password.txt",ios::out|ios::app);
	for(int i=23310;i<=23350;i++)
	{
	out<<i<<i<<endl;
	}
}
