#include <iostream>
#include <time.h>
#include <unistd.h>
using namespace std;
class Clock
{
public:
Clock()
{
time_t t = time(NULL);
tm local = * localtime(&t);
_hour = local.tm_hour;
_minute = local.tm_min;
_second = local.tm_sec;
}
void run()
{
for(;;)
{
tick();
show();
}

}
private:
void tick()
{
sleep(1);
if(++_second == 60)
{
_second = 00;
if(++_minute == 60)
{
_minute = 00;
if(++_hour == 24)
{
_hour = 00;
}
}
}
}
void show()
{
system("cls");
cout<<_hour<<":"<<_minute<<":"<<_second<<endl;
}
int _hour;
int _minute;
int _second;
};


int main()
{
Clock c;
c.run();
return 0;
}

