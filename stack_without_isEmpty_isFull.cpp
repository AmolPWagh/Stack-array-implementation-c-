#include <iostream>
using namespace std;

class stack{
    private:
        int top;
        int a[5];

    public:
        stack()
        {
            top=-1
            for( int i=0 ; i<5 ; i++ )
            {
                a[top]=0;
            }
        }

        void push(int val)
        {
            if(top==4)
            {
                cout<<"Stack is Full."<<endl;
            }
            else
            {
                top++;
                a[top]=val;
            }
        }

        int pop()
        {
            if(top==-1)
            {
                cout<<"Stack is Empty."<<endl;
            }
            else
            {
                int PopVal=a[top];
                a[top]=0;
                top--;
                return PopVal;
            }
        }

        int peek()
        {
            if(top==-1)
            {
                cout<<"Stack is Empty."<<endl;
                return 0;
            }
            else
            {
                cout<<"The peek value of stack is : "<<endl;
                return a[top];
            }
        }

        int count()
        {
            return (top+1);
        }

        int display()
        {
            cout<<"Stack is : ";
            for( i=4 ; i>=0 ; i-- )
            {
                cout<<a[i]<<endl;
            }
        }
};

int main()
{
    stack s1;
    int option,position,value;
    
    do
    {
        cout<<endl<<endl;
        cout<<"Enter the option number to perform operation."<<endl<<"0. To exit the program."<<endl;
        cout<<"1. To perform push operation."<<endl;
        cout<<"2. To perform pop operation."<<endl;
        cout<<"3. To display peek value."<<endl;
        cout<<"4. To display total no of elements in stack."<<endl;
        cout<<"5. To display all elements in stack."<<endl;
        cout<<"6. To clear screen."<<endl<<endl;

        cin>>option;
        switch(option)
        {
            case 1:
                cout<<"Enter an element to push in the stack"<<endl;
                cin>>value;
                s1.push(value);
                break;
            case 2:
                cout<<"The popped value is : "<<s1.pop()<<endl;
                break;
            case 3:
                cout<<s1.peek()<<endl;
                break;
            case 4:
                cout<<"Total number of elements in stack are : "<<endl;
                cout<<s1.count()<<endl;
                break;
            case 5:
                s1.display();
                break;
            case 6:
                system("cls");
                break;
            default:
                cout<<"Enter proper option."<<endl;

        }

    }
    while(option!=0);
    
    return 0;
}
