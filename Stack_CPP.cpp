#include <iostream>
using namespace std;
template <class type>
class Stack
{
    type sk[5];

public:
    int TOP = -1;
    void push()
    {
        if (TOP >= 4)
        {
            cout << "\033[1;31m"
                 << "Stack is OVERFLOW!"
                 << "\033[0m" << endl;
        }
        if (TOP < 4)
        {
            TOP++;
            cout << "\033[33m"
                 << "Enter Element to PUSH: "
                 << "\033[0m" << endl;
            cin >> sk[TOP];
        }
    }
    void pop()
    {
        if (TOP < 0)
        {
            cout << "\033[1;31m"
                 << "Stack is UNDERFLOW!"
                 << "\033[0m" << endl;
        }
        if (TOP >= 0)
        {
            cout << "\033[33m"
                 << "POPped Number: " << sk[TOP] << "\033[0m" << endl;
            TOP--;
        }
    }
    void disp()
    {
        if (TOP < 0)
        {
            cout << "\033[1;31m"
                 << "Stack is EMPTY! Continue and Add some elements!"
                 << "\033[0m" << endl;
        }
        if (TOP >= 0)
        {
            cout << "\033[35;1m"
                 << "=========== MY STACK ========="
                 << "\033[0m" << endl;
            for (int i = 0; i <= TOP; i++)
            {
                cout << sk[i] << endl;
            }
            cout << "\033[35;1m"
                 << "=============================="
                 << "\033[0m" << endl;
        }
    }
    void reset()
    {
        TOP = -1;
    }
};

int main()
{
    Stack<int> s_int;
    Stack<char> s_chr;
    Stack<float> s_flo;
    Stack<double> s_dbl;
    Stack<string> s_str;
    int c = 0, c2 = 0, f = 0;
    while (1)
    {
        int op, m1 = 1;
        if (f == 0)
        {
            cout << "\033[36;1m" << endl
                 << "Welcome to SoleSurvivor's Stack!"
                 << "\033[0m" << endl;
            f = 1;
        }
        cout << "\033[35;1m"
             << "------------------------------" << endl;
        cout << "Enter Your Datatype:" << endl;
        cout << "1 -> INTEGER" << endl
             << "2 -> CHARACTER" << endl
             << "3 -> FLOAT" << endl
             << "4 -> DOUBLE" << endl
             << "5 -> STRING" << endl
             << "6 -> EXIT" << endl;
        cout << "------------------------------"
             << "\033[0m" << endl;
        cin >> op;
        switch (op)
        {
        case 1:
        {
            c2 = 0;
            m1 = 1;
            if (s_int.TOP >= 0)
            {
                cout << "\033[33;1m"
                     << "------------------------------" << endl
                     << "INTEGER STACK HISTORY" << endl
                     << "1 -> CONTINUE with Old Stack" << endl
                     << "2 -> CREATE New Stack" << endl
                     << "------------------------------"
                     << "\033[0m" << endl;
                cin >> (op);
                switch (op)
                {
                case 1:
                    c = 0;
                    break;
                case 2:
                    s_int.reset();
                    c = 0;
                    break;
                default:
                    cout << "\033[31m"
                         << "Wrong Choice"
                         << "\033[0m" << endl;
                    c++;
                    if (c <= 2)
                    {
                        cout << "Chances Remaining:" << 3 - c << endl;
                        if (c == 2)
                            cout << "\033[33m"
                                 << "Last chance!!!"
                                 << "\033[0m" << endl;
                    }
                    else if (c > 2)
                    {
                        cout << "\033[1;31m"
                             << "Chances Exhausted"
                             << "\033[0m" << endl;
                        exit(0);
                    }
                }
            }
            while (m1)
            {

                cout << "\033[32;1m"
                     << "------------------------------" << endl
                     << "Enter Your INTEGER Operation to Perform:" << endl
                     << "1 -> PUSH to Stack" << endl
                     << "2 -> POP from Stack" << endl
                     << "3 -> DISPLAY the Stack" << endl
                     << "4 -> RETURN to Main Menu" << endl
                     << "5 -> EXIT" << endl
                     << "------------------------------"
                     << "\033[0m" << endl;
                cin >> op;
                switch (op)
                {
                case 1:
                    s_int.push();
                    c = 0;
                    break;
                case 2:
                    s_int.pop();
                    c = 0;
                    break;
                case 3:
                    s_int.disp();
                    c = 0;
                    break;
                case 4:
                    m1 = 0;
                    break;
                case 5:
                    cout << "\033[1;36m"
                         << "Thank You! See You Again!"
                         << "\033[0m" << endl;
                    exit(0);
                default:
                    cout << "\033[31m"
                         << "Wrong Choice"
                         << "\033[0m" << endl;
                    c++;
                    if (c <= 2)
                    {
                        cout << "Chances Remaining:" << 3 - c << endl;
                        if (c == 2)
                            cout << "\033[33m"
                                 << "Last chance!!!"
                                 << "\033[0m" << endl;
                    }
                    else if (c > 2)
                    {
                        cout << "\033[1;31m"
                             << "Chances Exhausted"
                             << "\033[0m" << endl;
                        exit(0);
                    }
                }
            }
            break;
        }
        case 2:
        {
            c2 = 0;
            m1 = 1;
            if (s_chr.TOP >= 0)
            {
                cout << "\033[33;1m"
                     << "------------------------------" << endl
                     << "CHAR STACK HISTORY" << endl
                     << "1 -> CONTINUE with Old Stack" << endl
                     << "2 -> CREATE New Stack" << endl
                     << "------------------------------"
                     << "\033[0m" << endl;
                cin >> (op);
                switch (op)
                {
                case 1:
                    c = 0;
                    break;
                case 2:
                    s_chr.reset();
                    c = 0;
                    break;
                default:
                    cout << "\033[31m"
                         << "Wrong Choice"
                         << "\033[0m" << endl;
                    c++;
                    if (c <= 2)
                    {
                        cout << "Chances Remaining:" << 3 - c << endl;
                        if (c == 2)
                            cout << "\033[33m"
                                 << "Last chance!!!"
                                 << "\033[0m" << endl;
                    }
                    else if (c > 2)
                    {
                        cout << "\033[1;31m"
                             << "Chances Exhausted"
                             << "\033[0m" << endl;
                        exit(0);
                    }
                }
            }
            while (m1)
            {
                cout << "\033[32;1m"
                     << "------------------------------" << endl
                     << "Enter Your CHAR Operation to Perform:" << endl
                     << "1 -> PUSH to Stack" << endl
                     << "2 -> POP from Stack" << endl
                     << "3 -> DISPLAY the Stack" << endl
                     << "4 -> RETURN to Main Menu" << endl
                     << "5 -> EXIT" << endl
                     << "------------------------------"
                     << "\033[0m" << endl;
                cin >> op;
                switch (op)
                {
                case 1:
                    s_chr.push();
                    c = 0;
                    break;
                case 2:
                    s_chr.pop();
                    c = 0;
                    break;
                case 3:
                    s_chr.disp();
                    c = 0;
                    break;
                case 4:
                    m1 = 0;
                    break;
                case 5:
                    cout << "\033[1;36m"
                         << "Thank You! See You Again!"
                         << "\033[0m" << endl;
                    exit(0);
                default:
                    cout << "\033[31m"
                         << "Wrong Choice"
                         << "\033[0m" << endl;
                    c++;
                    if (c <= 2)
                    {
                        cout << "Chances Remaining:" << 3 - c << endl;
                        if (c == 2)
                            cout << "\033[33m"
                                 << "Last chance!!!"
                                 << "\033[0m" << endl;
                    }
                    else if (c > 2)
                    {
                        cout << "\033[1;31m"
                             << "Chances Exhausted"
                             << "\033[0m" << endl;
                        exit(0);
                    }
                }
            }
            break;
        }
        case 3:
        {
            c2 = 0;
            m1 = 1;
            if (s_flo.TOP >= 0)
            {
                cout << "\033[33;1m"
                     << "------------------------------" << endl
                     << "FLOAT STACK HISTORY" << endl
                     << "1 -> CONTINUE with Old Stack" << endl
                     << "2 -> CREATE New Stack" << endl
                     << "------------------------------"
                     << "\033[0m" << endl;
                cin >> (op);
                switch (op)
                {
                case 1:
                    c = 0;
                    break;
                case 2:
                    s_flo.reset();
                    c = 0;
                    break;
                default:
                    cout << "\033[31m"
                         << "Wrong Choice"
                         << "\033[0m" << endl;
                    c++;
                    if (c <= 2)
                    {
                        cout << "Chances Remaining:" << 3 - c << endl;
                        if (c == 2)
                            cout << "\033[33m"
                                 << "Last chance!!!"
                                 << "\033[0m" << endl;
                    }
                    else if (c > 2)
                    {
                        cout << "\033[1;31m"
                             << "Chances Exhausted"
                             << "\033[0m" << endl;
                        exit(0);
                    }
                }
            }
            while (m1)
            {
                cout << "\033[32;1m"
                     << "------------------------------" << endl
                     << "Enter Your FLOAT Operation to Perform:" << endl
                     << "1 -> PUSH to Stack" << endl
                     << "2 -> POP from Stack" << endl
                     << "3 -> DISPLAY the Stack" << endl
                     << "4 -> RETURN to Main Menu" << endl
                     << "5 -> EXIT" << endl
                     << "------------------------------"
                     << "\033[0m" << endl;
                cin >> op;
                switch (op)
                {
                case 1:
                    s_flo.push();
                    c = 0;
                    break;
                case 2:
                    s_flo.pop();
                    c = 0;
                    break;
                case 3:
                    s_flo.disp();
                    c = 0;
                    break;
                case 4:
                    m1 = 0;
                    break;
                case 5:
                    cout << "\033[1;36m"
                         << "Thank You! See You Again!"
                         << "\033[0m" << endl;
                    exit(0);
                default:
                    cout << "\033[31m"
                         << "Wrong Choice"
                         << "\033[0m" << endl;
                    c++;
                    if (c <= 2)
                    {
                        cout << "Chances Remaining:" << 3 - c << endl;
                        if (c == 2)
                            cout << "\033[33m"
                                 << "Last chance!!!"
                                 << "\033[0m" << endl;
                    }
                    else if (c > 2)
                    {
                        cout << "\033[1;31m"
                             << "Chances Exhausted"
                             << "\033[0m" << endl;
                        exit(0);
                    }
                }
            }
            break;
        }
        case 4:
        {
            c2 = 0;
            m1 = 1;
            if (s_dbl.TOP >= 0)
            {
                cout << "\033[33;1m"
                     << "------------------------------" << endl
                     << "DOUBLE STACK HISTORY" << endl
                     << "1 -> CONTINUE with Old Stack" << endl
                     << "2 -> CREATE New Stack" << endl
                     << "------------------------------"
                     << "\033[0m" << endl;
                cin >> (op);
                switch (op)
                {
                case 1:
                    c = 0;
                    break;
                case 2:
                    s_dbl.reset();
                    c = 0;
                    break;
                default:
                    cout << "\033[31m"
                         << "Wrong Choice"
                         << "\033[0m" << endl;
                    c++;
                    if (c <= 2)
                    {
                        cout << "Chances Remaining:" << 3 - c << endl;
                        if (c == 2)
                            cout << "\033[33m"
                                 << "Last chance!!!"
                                 << "\033[0m" << endl;
                    }
                    else if (c > 2)
                    {
                        cout << "\033[1;31m"
                             << "Chances Exhausted"
                             << "\033[0m" << endl;
                        exit(0);
                    }
                }
            }
            while (m1)
            {
                cout << "\033[32;1m"
                     << "------------------------------" << endl
                     << "Enter Your DOUBLE Operation to Perform:" << endl
                     << "1 -> PUSH to Stack" << endl
                     << "2 -> POP from Stack" << endl
                     << "3 -> DISPLAY the Stack" << endl
                     << "4 -> RETURN to Main Menu" << endl
                     << "5 -> EXIT" << endl
                     << "------------------------------"
                     << "\033[0m" << endl;
                cin >> op;
                switch (op)
                {
                case 1:
                    s_dbl.push();
                    c = 0;
                    break;
                case 2:
                    s_dbl.pop();
                    c = 0;
                    break;
                case 3:
                    s_dbl.disp();
                    c = 0;
                    break;
                case 4:
                    m1 = 0;
                    break;
                case 5:
                    cout << "\033[1;36m"
                         << "Thank You! See You Again!"
                         << "\033[0m" << endl;
                    exit(0);
                default:
                    cout << "\033[31m"
                         << "Wrong Choice"
                         << "\033[0m" << endl;
                    c++;
                    if (c <= 2)
                    {
                        cout << "Chances Remaining:" << 3 - c << endl;
                        if (c == 2)
                            cout << "\033[33m"
                                 << "Last chance!!!"
                                 << "\033[0m" << endl;
                    }
                    else if (c > 2)
                    {
                        cout << "\033[1;31m"
                             << "Chances Exhausted"
                             << "\033[0m" << endl;
                        exit(0);
                    }
                }
            }
            break;
        }
        case 5:
        {
            c2 = 0;
            m1 = 1;
            if (s_dbl.TOP >= 0)
            {
                cout << "\033[33;1m"
                     << "------------------------------" << endl
                     << "STRING STACK HISTORY" << endl;
                cout << "1 -> CONTINUE with Old Stack" << endl
                     << "2 -> CREATE New Stack" << endl
                     << "------------------------------"
                     << "\033[0m" << endl;
                cin >> (op);
                switch (op)
                {
                case 1:
                    c = 0;
                    break;
                case 2:
                    s_dbl.reset();
                    c = 0;
                    break;
                default:
                    cout << "\033[31m"
                         << "Wrong Choice"
                         << "\033[0m" << endl;
                    c++;
                    if (c <= 2)
                    {
                        cout << "Chances Remaining:" << 3 - c << endl;
                        if (c == 2)
                            cout << "\033[33m"
                                 << "Last chance!!!"
                                 << "\033[0m" << endl;
                    }
                    else if (c > 2)
                    {
                        cout << "\033[1;31m"
                             << "Chances Exhausted"
                             << "\033[0m" << endl;
                        exit(0);
                    }
                }
            }
            while (m1)
            {
                cout << "\033[32;1m"
                     << "------------------------------" << endl
                     << "Enter Your STRING Operation to Perform:" << endl
                     << "1 -> PUSH to Stack" << endl
                     << "2 -> POP from Stack" << endl
                     << "3 -> DISPLAY the Stack" << endl
                     << "4 -> RETURN to Main Menu" << endl
                     << "5 -> EXIT" << endl
                     << "------------------------------"
                     << "\033[0m" << endl;
                cin >> op;
                switch (op)
                {
                case 1:
                    s_dbl.push();
                    c = 0;
                    break;
                case 2:
                    s_dbl.pop();
                    c = 0;
                    break;
                case 3:
                    s_dbl.disp();
                    c = 0;
                    break;
                case 4:
                    m1 = 0;
                    break;
                case 5:
                    cout << "\033[1;36m"
                         << "Thank You! See You Again!"
                         << "\033[0m" << endl;
                    exit(0);
                default:
                    cout << "\033[31m"
                         << "Wrong Choice"
                         << "\033[0m" << endl;
                    c++;
                    if (c <= 2)
                    {
                        cout << "Chances Remaining:" << 3 - c << endl;
                        if (c == 2)
                            cout << "\033[33m"
                                 << "Last chance!!!"
                                 << "\033[0m" << endl;
                    }
                    else if (c > 2)
                    {
                        cout << "\033[1;31m"
                             << "Chances Exhausted"
                             << "\033[0m" << endl;
                        exit(0);
                    }
                }
            }
            break;
        }
        case 6:
            cout << "\033[1;36m"
                 << "Thank You! See You Again!"
                 << "\033[0m" << endl;
            exit(0);
        default:
            cout << "\033[31m"
                 << "Wrong Choice"
                 << "\033[0m" << endl;
            c2++;
            if (c2 <= 2)
            {
                cout << "Chances Remaining:" << 3 - c2 << endl;
                if (c2 == 2)
                    cout << "\033[33m"
                         << "Last chance!!!"
                         << "\033[0m" << endl;
            }
            else if (c2 > 2)
            {
                cout << "\033[1;31m"
                     << "Chances Exhausted"
                     << "\033[0m" << endl;
                exit(0);
            }
        }
    }
}
