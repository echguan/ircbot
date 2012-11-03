#include<iostream>
using namespace std;
#include<string>

class ircBot
{
	private:
		string server;
		string nick;
		string password;
	public:
		ircBot(string server, string nick, string password=""); // 密码可选
		int connect();
		int changeNick(string nick,string password=""); // 更改nick，密码可选
};
