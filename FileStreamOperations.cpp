// CREATING FILE USING fstream
/*
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream st;
    st.open("test.txt", ios::out);
    if (!st)
    {
        cout<<"File creation failed";
    }
    else
    {
        cout<<"File is created";
    }

}
*/


// CREATING FILE USING fstream in CLASSES
/*
#include<iostream>
#include<fstream>
using namespace std;

class createfile
{
public:
    createfile()
    {
        fstream fs;
        fs.open("file.txt", ios :: out);
        if (!fs)
        {
            cout<<"File is not created..."<<endl;
        }
        else
        {
            cout<<"File is created..."<<endl;
        }
    }
};

int main()
{
    createfile C;
    return 0;
}
*/

// USING INHERITANCE
/*
#include<iostream>
#include<fstream>
using namespace std;

class base
{

public:
    void message()
    {
        cout<<"File will be created using inheritance"<<endl;

    }
};

class derived : public base
{
public:
    void createfiel()
    {
        fstream fs;
        fs.open("newfile.txt", ios :: out);
        if (!fs)
        {
            cout<<"File is not created";

        }
        else
        {
            cout<<"File is created";
            fs.close();
        }
    }
};

int main()
{

    derived obj;
    obj.message();
    obj.createfiel();
}
*/
