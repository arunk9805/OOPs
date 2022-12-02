#include<iostream>
using namespace std;

template<class T>
class Stack {
    T *stk;
    int size;
    int top;

public: 
    Stack(int (size))
        :size(size-1) {
            top = -1;
            stk = new T[size];
        }
    void push(T x);
    T pop();
    bool isEmpty() {
        if(top>=size) return false;
        else return true;
    };
    void display(){
        int i=0;
        while(i<=top) {
            cout<<stk[i]<<" "<<endl;
            i++;
        }
    }
};

template<class T>
void Stack<T>::push(T x) {
    try {
            if(!isEmpty())
                throw string(" Over Flow\n");
            top++;
            stk[top]= x;
        }
    catch(string e) {
        cout<<"Error: Stack"<<e<<endl;
    }
}

template<class T>
T Stack<T>::pop() {
    T temp=stk[top];
    try{
        if(top==-1)
            throw string("Under Flow\n");
        stk[top]=0;
        top--;
        return temp;
    }
    catch(string e){
        cout<<"Error: Stack"<<e<<endl;
    }
}

int main()
{
    Stack<int> s(3);
    s.push(90);
    s.push(80);
    s.push(30);
    s.push(25);
    s.push(10);
    s.display();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.display();
}
