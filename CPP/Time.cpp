#include <bits/stdc++.h>
using namespace std;
class utime
{
int hour, minute, second;
public:
utime(int h = 0, int m = 0, int s = 0) : hour(h), minute(m), second(s) {}
utime add(utime);
utime sub(utime);
// friend utime add(utime, utime);
// friend utime sub(utime, utime);
void show();
};
void utime::show()
{
cout << "\nHours: " << hour << " Minutes: " << minute << " Seconds: " <<
second;
}
utime utime::add(utime a)
{
utime t;
int total = ((hour*60+minute)*60+second) +
((a.hour*60+a.minute)*60+a.second);
t.second = total%60;
total /= 60;
t.minute = total%60;
total /= 60;
t.hour = total;
return t;
}
utime utime::sub(utime a)
{
utime t;
int total = abs(((hour*60+minute)*60+second) -
((a.hour*60+a.minute)*60+a.second));
t.second = total%60;
total /= 60;
t.minute = total%60;
total /= 60;
t.hour = total;
return t;
}
int main()
{
utime t1(3, 25, 44), t2(6, 26, 48);
cout << "\nT1\n"; t1.show();
cout << "\n\nT2\n"; t2.show();
// utime tAdd = add(t1, t2);
utime tAdd = t1.add(t2);
cout << "\n\ntAdd\n";
tAdd.show();
utime tSub = t2.sub(t1);
cout << "\n\nSub\n";
tSub.show();
return 0;
}