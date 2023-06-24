#include <iostream>

using namespace std;
class IntStack
{
private:
    int *stackArray;
    int stackSize;
    int top;

public:
    IntStack(int);
    void push(int);
    void pop(int &);
    bool isFull(void);
    bool isEmpty(void);
    void input(void);
};
IntStack::IntStack(int size)
{
    stackArray = new int[size];
    stackSize = size;
    top = -1;
}
bool IntStack::isFull(void)
{
    bool status;
    if (top == stackSize - 1)
    {
        status = true;
    }
    else
    {
        status = false;
    }
    return status;
}
bool IntStack::isEmpty(void)
{
    bool status;
    if (top == -1)
        status = true;
    else
        status = false;
    return status;
}
void IntStack::pop(int &num)
{
    if (isEmpty())
    {
        cout << "the stack is empty\n";
    }
    else
    {

        num = stackArray[top];
        top--;
    }
}
void IntStack::push(int num)
{
    if (isFull())
    {
        cout << "the stack is full.\n";
    }
    else
    {
        top++;
        stackArray[top] = num;
    }
}
void IntStack::input(){
    int count = 0;
    while(count <2){
        int n ;
        cin >> n;
        push(n);
        count++;
    }
}
int main()
{
    // create stack
    IntStack stack(2);
    int sum =1;
    int num;
    stack.input();
    while (!stack.isEmpty())
    {
        stack.pop(num);
        sum= sum*num;
        // cout << num << endl;
    }
    cout <<sum;
    cout << endl;
    return 0;
}