#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int cmd;
        /* code */
        ofstream writefile ("std.txt"), ofstream::app);
        ifstream readFile ("std.txt");
        string line;
        string name;

        cin >> cmd;
        if (cmd== 1)(
            cin >>name;
            if (writefile.is_open()) {
                writefile << name << endl;
                writefile.close ();
            }else {
                cout << "Unable to open file";}

        return 0;
}
