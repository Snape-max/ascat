#include "prettyascii.h"
#include <cctype>



void goprint(string input){
        string output;
        int flag = 0;
        for (int i=0;i<input.size();i++){
            if (!isascii(input[i]))
            {
                flag = 1;
            }
            
        }
        if (flag){
            prettyascii("Not all ASCII", output);
        } else {
            prettyascii(input, output);
        }
        cout<<output;
}


int main(int argc, char** argv){

    string output;
    string input;

    if (argc == 1)
    {
        while (1)
        {
            input = "";
            cin>>input;
            goprint(input);
        }
    }

    for(int i=1;i<argc;i++){
        input += argv[i];
        input += " ";
    }
    goprint(input);
    return 0;
}