#include<iostream>
using namespace std;

class Mail;

class Sender
{
	public:
		Sender(string s):_address(s){}
		
		Sender& operator<<(const Mail &mail);
		
		private:
			string _address;
};

class Mail
{
	public:
		//friend class Sender;
		friend Sender& Sender::operator<<(const Mail &mail);
		Mail(string tit,string con):_title(tit),_content(con){}
		
		private:
			string _title;
			string _content;
};


Sender& Sender::operator<<(const Mail &mail)
{
	cout << mail._title << " " << mail._content << endl; 
}


int main()
{
	Sender sender("guilin_wang@163.com");
    Mail mail("note","meeting at 3:00 pm");
    Mail mail2("tour","One night in beijing");
    sender<<mail<<mail2;
	
	return 0;
 } 
