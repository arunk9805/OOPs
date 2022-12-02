#include <bits/stdc++.h>
using namespace std;
class stud {
string name;
int roll, marksA, marksB, marksC;
public:
static int n;
static double total;
void getVal()
{
cin.ignore();
cout << "\nEnter name: "; getline(cin, name);
cout << "\nEnter roll: "; cin >> roll;
cout << "\nEnter marks A: "; cin >> marksA;
cout << "\nEnter marks B: "; cin >> marksB;
cout << "\nEnter marks C: "; cin >> marksC;
n++;
total += (marksA + marksB + marksC);
}
void show()
{
cout << "\nName: " << name << "\nRoll: " << roll << "\nMarks A: " <<
marksA << "\nMarks B: " << marksB << "\nMarks C: " << marksC;
}
friend stud maximum(stud *obj);
static double getavg();
};
int stud::n = 0;
double stud::total = 0;
double stud::getavg()
{
return total/n;
}
stud maximum(stud *obj)
{
int max_total = obj[0].marksA + obj[0].marksB + obj[0].marksC, total;
stud maxStud = obj[0];
for(int i = 1 ; i < stud::n ; i++)
{
total = obj[i].marksA + obj[i].marksB + obj[i].marksC;
if(total > max_total)
{
max_total = total;
maxStud = obj[i];
}
}
return maxStud;
}
int main()
{
int n;
cout << "\nEnter number of students: "; cin >> n;
stud *arr = new stud[n];
for(int i = 0 ; i < n ; i++)
{
cout << "Details for Student " << i+1 << "\n";
arr[i].getVal();
}
stud res = maximum(arr);
cout << "\nDetails of the student with highest marks:\n";
res.show();
cout << "\n\nAverage marks of the class/students: " << stud::getavg();
return 0;
}