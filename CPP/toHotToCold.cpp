#include <bits/stdc++.h>
using namespace std;
class TooHot
{
int temp;
public:
TooHot(int t) : temp(t) {}
void what()
{
cout << "\nTemperature " << temp << " is too hot";
}
};
class TooCold
{
int temp;
public:
TooCold(int t) : temp(t) {}
void what()
{
cout << "\nTemperature " << temp << " is too cold";
}
};
int main()
{
int temp;
try
{
cout << "\nEnter temperature: ";
cin >> temp;
if (temp > 40)
{
throw(TooHot(temp));
}
else if (temp < 20)
{
throw(TooCold(temp));
}
else
cout << "\nTemperature is normal";
}
catch (TooHot obj)
{
obj.what();
}
catch (TooCold obj)
{
obj.what();
}
catch (...)
{
cout << "\nUnknown error";
}
}