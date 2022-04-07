
#include <iostream>
#include <string>
using namespace std;

class charinput
{
    public :
        
        string str = "";
        
        void add(char str1) 
        {
            str = str + str1;
        }
        
        string getvalue() 
        {
            return str;
        }
};      

class numinput : public charinput 
{
    public:
    
    string getvalue()
    {
        return str;
    }
    
    void add(char str2)
    {
        if(!(str2 >= 'a' && str2 <= 'z'))
        {
            charinput::add(str2);
            // add(str2);
        }
    }
};

int main()
{
    charinput *inputc = new charinput();
    numinput *inputn = new numinput();
    inputn->add('1');
    inputn->add('a');
    inputn->add('0');
    
    cout << inputn->getvalue();

    return 0;
}

