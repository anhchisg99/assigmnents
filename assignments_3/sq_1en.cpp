#include <iostream>

using namespace std;

struct StackNode
{
    int value;
    StackNode *next;
};
class DynIntStack
{
private:
    StackNode *top;

public:
    DynIntStack(void);
    void push(int);
    void pop(int &);
    bool isEmpty(void);
    void check(void);
};
DynIntStack::DynIntStack()
{
    top = NULL;
}
void DynIntStack::push(int num)
{
    StackNode *newNode;
    newNode = new StackNode;
    newNode->value = num;
    if (isEmpty())
    {
        top = newNode;
        newNode->next = NULL;
    }
    else
    {
        newNode->next = top;
        top = newNode;
    }
}
void DynIntStack::pop(int &num)
{
    StackNode *temp;
    if (isEmpty())
    {
        cout << "Stack rong.\n";
    }
    else // pop value off top of stack
    {
        num = top->value;
        temp = top->next;
        delete top;
        top = temp;
    }
}
bool DynIntStack::isEmpty(void)
{
    bool status;
    if (top == NULL)
        status = true;
    else
        status = false;
    return status;
}
void DynIntStack::check()
{
    int len = 0;
    int catchVarmain;
    int count = 0;
    int x = 0;
    int cactchVar;

    while (1)
    {
        int n;
        cin >> n;

        if (count == 0)
        {
            x = n;
        }
        else
        {
            if (n == 0)
            {
                break;
            }
            if (x == n)
            {
                if (len > 0)
                {
                    len--;  
                }
                pop(cactchVar);
            }
            if (x != n && n != 0)
            {
                len++;
                push(n);
            }
        }

        count++;
    }
    if (len == 0)
    {
        cout << "Stack rong.";
    }
    if (len != 0)
    {
        cout << "Cac gia tri co trong stack la:";

        for (int i = 0; i < len; i++)
        {
            pop(catchVarmain);
            cout << " " << catchVarmain;
        }
    }
}
int main()
{
    DynIntStack stack;
    stack.check();
    cout << "\n";   
    return 0;
}