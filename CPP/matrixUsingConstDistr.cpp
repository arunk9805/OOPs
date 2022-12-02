#include <bits/stdc++.h>
using namespace std;
// template <typename T>
class matrix {
int **mat;
int row, col;
public:
matrix(int r = 0, int c = 0) {
row = r;
col = c;
mat = new int* [r];
for(int i = 0 ; i < r ; i++)
mat[i] = new int[c];
cout << "\nMemory allocated for matix";
}
matrix(const matrix &m) {
row = m.row;
col = m.col;
mat = new int* [row];
for(int i = 0 ; i < row ; i++)
{
mat[i] = new int[col];
for(int j = 0 ; j < col ; j++)
mat[i][j] = m.mat[i][j];
}
cout << "\nCopy const called";
}
~matrix() {
delete [] mat;
cout << "\nMatrix deallocated";
}
void input() {
for(int i = 0 ; i < row ; i++) {
for(int j = 0 ; j < col ; j++) {
cout << "\nMAT[" << i << "][" << j << "]: ";
cin >> mat[i][j];
}
}
}
void show() {
for(int i = 0 ; i < row ; i++) {
for(int j = 0 ; j < col ; j++)
cout << mat[i][j] << " ";
cout << endl;
}
}
matrix add(matrix m) {
matrix res(row, col);
for(int i = 0 ; i < row ; i++) {
for(int j = 0 ; j < col ; j++)
res.mat[i][j] = mat[i][j] + m.mat[i][j];
}
return res;
}
matrix sub(matrix m) {
matrix res(row, col);
for(int i = 0 ; i < row ; i++) {
for(int j = 0 ; j < col ; j++)
res.mat[i][j] = mat[i][j] - m.mat[i][j];
}
return res;
}
matrix mult(matrix m) {
matrix res(row, m.col);
for(int i = 0 ; i < row ; i++)
for(int j = 0 ; j < m.col ; j++)
{
res.mat[i][j] = 0;
for(int k = 0 ; k < col ; k++)
res.mat[i][j] += mat[i][k]*m.mat[k][j];
}
return res;
}
};
int main()
{
int r, c;
cout << "\nEnter number of rows and columns: ";
cin >> r >> c;
matrix m1(r, c);
cout << "\nTaking matrix 1\n";
m1.input();
cout << "\nEntered matrix is:\n";
m1.show();
matrix m2(r, c);
m2.input();
cout << "\nEntered matrix is:\n";
m2.show();
matrix mAdd = m1.add(m2) ;
cout << "\nResult Add:\n"; mAdd.show();
cout << endl;
matrix mSub = m1.sub(m2) ;
cout << "\nResult Sub:\n"; mSub.show();
cout << endl;
matrix mMul = m1.mult(m2) ;
cout << "\nResult Mult:\n"; mMul.show();
cout << endl;
return 0;
}