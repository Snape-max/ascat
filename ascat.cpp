#include "prettyascii.h"
#include <conio.h>



int main(int argc, char** argv){

    string output;
    string input;
    if (argc == 1)
    {
        while (1)
        {
            input = "";
            cin>>input;
            prettyascii(input, output);
            cout<<output;
        }
    }

    for(int i=1;i<argc;i++){
        input += argv[i];
        input += " ";
    }

    prettyascii(input, output);
    cout<<output<<endl;
    return 0;
}