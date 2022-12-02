#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv) {
cout << "Total command line aruments: " << argc;
cout << "\nThr required arguments are:\n";
for(int i = 0 ; i < argc ; i++)
cout << argv[i] << "\n";
return 0;
}