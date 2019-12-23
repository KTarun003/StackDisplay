#include <iostream>
#include <stack>

using namespace std;
stack<int> data;
    void display()
    {

        cout<<" The Stack now is : \n";
        cout<<" |   | "<<endl;
        if (data.empty()) {
            cout << "The Stack is Empty \n";
            return;
        }
        while(!data.empty())
        {
            cout<<" ----- "<<endl;
            cout << " | " << data.top() << " | " << endl;
            cout<<" |   | "<<endl;
            cout<<" ----- "<<endl;
            data.pop();
        }
        cout<<"\n";
    }
    int main() {

        char c = 'y';
        do {
            cout << "\n 1. PUSH ";
            cout << "\n 2. POP ";
            cout << "\n 3. DISPLAY ";
            cout << "\n 4. EXIT " << endl;
            cout << "\n NOTE : After Displayng stack the elements will not be present in the stack";
            cout << "\n Enter your Choice : ";
            int ch, inf;
            cin >> ch;
            switch (ch) {
                case 1 :
                    cout << " Enter element ";
                    cin >> inf;
                    data.push(inf);
                    break;

                case 2 :
                    data.pop();
                    break;

                case 3 :
                    display();
                    break;

                case 4 :

                    exit(0);

                default :

                    exit(0);
            }
        } while (c == 'y');

    }