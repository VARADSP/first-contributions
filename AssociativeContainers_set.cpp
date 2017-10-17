//set stores string objects
#include<iostream>
#include<set>
#include<string>
using namespace std;

int main()
{
    string names[] = {"Juanita","Robert","Mary","Amanda","Marie"};

    set<string,less<string> > nameset(names,names+5);
    set<string,less<string> >::iterator iter;

    nameset.insert("yvette");
    nameset.insert("Larry");
    nameset.insert("Robert");
    nameset.insert("Barry");
    nameset.erase("Mary");


    cout << "\n Size = " << nameset.size() << endl;

    iter = nameset.begin();
    while(iter != nameset.end())
        cout << *iter++ << endl;

    string searchname;

    cout << "\n Enter name to be search for : ";
    cin >> searchname;

    iter = nameset.find(searchname);

    if(iter == nameset.end())
        cout << "The name " << searchname << " qis Not in the set";
    else
        cout << "The name " << searchname << " is in the list ";
    cout << endl;
    return 0;
}
