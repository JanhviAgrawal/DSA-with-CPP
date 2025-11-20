#include "Stack.cpp"

int main()
{
    Stack<int> stack(MAX);

    int num;
    cout << "Enter Decimal number: ";
    cin >> num;

    while (num != 0)
    {
        stack.push(num % 2);
        num = num / 2;
    }
    stack.display();
}