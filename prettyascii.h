#ifndef __prettyascii_h
#define __prettyascii_h
#include <string>
#include <iostream>
using namespace std;

string ascii[128][6] = 

{
    {"","","","","",""},
    {"","","","","",""},
    {"","","","","",""},
    {"","","","","",""},
    {"","","","","",""},
    {"","","","","",""},
    {"","","","","",""},
    {"","","","","",""},
    {"","","","","",""},
    {"","","","","",""},
    {"","","","","",""},
    {"","","","","",""},
    {"","","","","",""},
    {"","","","","",""},
    {"","","","","",""},
    {"","","","","",""},
    {"","","","","",""},
    {"","","","","",""},
    {"","","","","",""},
    {"","","","","",""},
    {"","","","","",""},
    {"","","","","",""},
    {"","","","","",""},
    {"","","","","",""},
    {"","","","","",""},
    {"","","","","",""},
    {"","","","","",""},
    {"","","","","",""},
    {"","","","","",""},
    {"","","","","",""},
    {"","","","","",""},
    {"","","","","",""},
    {"","","","","",""},
    {
        R"( _ )",
        R"(| |)",
        R"(| |)",
        R"(|_|)",
        R"((_))",
        R"(   )"},
    {
        R"( _ _ )",
        R"(( | ))",
        R"( V V )",
        R"(     )",
        R"(     )",
        R"(     )"},
    {
        R"(   _  _   )",
        R"( _| || |_ )",
        R"(|_  ..  _|)",
        R"(|_      _|)",
        R"(  |_||_|  )",
        R"(          )"},
    {
        R"(  _  )",
        R"( | | )",
        R"(/ __))",
        R"(\__ \)",
        R"((   /)",
        R"( |_| )"},
    {
        R"( _  __)",
        R"((_)/ /)",
        R"(  / / )",
        R"( / /_ )",
        R"(/_/(_))",
        R"(      )"},
    {
        R"(  ___   )",
        R"( ( _ )  )",
        R"( / _ \/\)",
        R"(| (_>  <)",
        R"( \___/\/)",
        R"(        )"},
    {
        R"( _ )",
        R"(( ))",
        R"(|/ )",
        R"(   )",
        R"(   )",
        R"(   )"},
    {
        R"(  __)",
        R"( / /)",
        R"(| | )",
        R"(| | )",
        R"(| | )",
        R"( \_\)"},
    {
        R"(__  )",
        R"(\ \ )",
        R"( | |)",
        R"( | |)",
        R"( | |)",
        R"(/_/ )"},
    {
        R"(      )",
        R"(__/\__)",
        R"(\    /)",
        R"(/_  _\)",
        R"(  \/  )",
        R"(      )"},
    {
        R"(       )",
        R"(   _   )",
        R"( _| |_ )",
        R"(|_   _|)",
        R"(  |_|  )",
        R"(       )"},
    {
        R"(   )",
        R"(   )",
        R"(   )",
        R"( _ )",
        R"(( ))",
        R"(|/ )"},
    {
        R"(       )",
        R"(       )",
        R"( _____ )",
        R"(|_____|)",
        R"(       )",
        R"(       )"},
    {
        R"(   )",
        R"(   )",
        R"(   )",
        R"( _ )",
        R"((_))",
        R"(   )"},
    {
        R"(    __)",
        R"(   / /)",
        R"(  / / )",
        R"( / /  )",
        R"(/_/   )",
        R"(      )"},
    {
        R"(  ___  )",
        R"( / _ \ )",
        R"(| | | |)",
        R"(| |_| |)",
        R"( \___/ )",
        R"(       )"},
    {
        R"( _ )",
        R"(/ |)",
        R"(| |)",
        R"(| |)",
        R"(|_|)",
        R"(   )"},
    {
        R"( ____  )",
        R"(|___ \ )",
        R"(  __) |)",
        R"( / __/ )",
        R"(|_____|)",
        R"(       )"},
    {
        R"( _____ )",
        R"(|___ / )",
        R"(  |_ \ )",
        R"( ___) |)",
        R"(|____/ )",
        R"(       )"},
    {
        R"( _  _   )",
        R"(| || |  )",
        R"(| || |_ )",
        R"(|__   _|)",
        R"(   |_|  )",
        R"(        )"},
    {
        R"( ____  )",
        R"(| ___| )",
        R"(|___ \ )",
        R"( ___) |)",
        R"(|____/ )",
        R"(       )"},
    {
        R"(  __   )",
        R"( / /_  )",
        R"(| '_ \ )",
        R"(| (_) |)",
        R"( \___/ )",
        R"(       )"},
    {
        R"( _____ )",
        R"(|___  |)",
        R"(   / / )",
        R"(  / /  )",
        R"( /_/   )",
        R"(       )"},
    {
        R"(  ___  )",
        R"( ( _ ) )",
        R"( / _ \ )",
        R"(| (_) |)",
        R"( \___/ )",
        R"(       )"},
    {
        R"(  ___  )",
        R"( / _ \ )",
        R"(| (_) |)",
        R"( \__, |)",
        R"(   /_/ )",
        R"(       )"},
    {
        R"(   )",
        R"( _ )",
        R"((_))",
        R"( _ )",
        R"((_))",
        R"(   )"},
    {
        R"(   )",
        R"( _ )",
        R"((_))",
        R"( _ )",
        R"(( ))",
        R"(|/ )"},
    {
        R"(  __)",
        R"( / /)",
        R"(/ / )",
        R"(\ \ )",
        R"( \_\)",
        R"(    )"},
    {
        R"(       )",
        R"( _____ )",
        R"(|_____|)",
        R"(|_____|)",
        R"(       )",
        R"(       )"},
    {
        R"(__  )",
        R"(\ \ )",
        R"( \ \)",
        R"( / /)",
        R"(/_/ )",
        R"(    )"},
    {
        R"( ___ )",
        R"(|__ \)",
        R"(  / /)",
        R"( |_| )",
        R"( (_) )",
        R"(     )"},
    {
        R"(   ____  )",
        R"(  / __ \ )",
        R"( / / _` |)",
        R"(| | (_| |)",
        R"( \ \__,_|)",
        R"(  \____/ )"},
    {
        R"(    _    )",
        R"(   / \   )",
        R"(  / _ \  )",
        R"( / ___ \ )",
        R"(/_/   \_\)",
        R"(         )"},
    {
        R"( ____  )",
        R"(| __ ) )",
        R"(|  _ \ )",
        R"(| |_) |)",
        R"(|____/ )",
        R"(       )"},
    {
        R"(  ____ )",
        R"( / ___|)",
        R"(| |    )",
        R"(| |___ )",
        R"( \____|)",
        R"(       )"},
    {
        R"( ____  )",
        R"(|  _ \ )",
        R"(| | | |)",
        R"(| |_| |)",
        R"(|____/ )",
        R"(       )"},
    {
        R"( _____ )",
        R"(| ____|)",
        R"(|  _|  )",
        R"(| |___ )",
        R"(|_____|)",
        R"(       )"},
    {
        R"( _____ )",
        R"(|  ___|)",
        R"(| |_   )",
        R"(|  _|  )",
        R"(|_|    )",
        R"(       )"},
    {
        R"(  ____ )",
        R"( / ___|)",
        R"(| |  _ )",
        R"(| |_| |)",
        R"( \____|)",
        R"(       )"},
    {
        R"( _   _ )",
        R"(| | | |)",
        R"(| |_| |)",
        R"(|  _  |)",
        R"(|_| |_|)",
        R"(       )"},
    {
        R"( ___ )",
        R"(|_ _|)",
        R"( | | )",
        R"( | | )",
        R"(|___|)",
        R"(     )"},
    {
        R"(     _ )",
        R"(    | |)",
        R"( _  | |)",
        R"(| |_| |)",
        R"( \___/ )",
        R"(       )"},
    {
        R"( _  __)",
        R"(| |/ /)",
        R"(| ' / )",
        R"(| . \ )",
        R"(|_|\_\)",
        R"(      )"},
    {
        R"( _     )",
        R"(| |    )",
        R"(| |    )",
        R"(| |___ )",
        R"(|_____|)",
        R"(       )"},
    {
        R"( __  __ )",
        R"(|  \/  |)",
        R"(| |\/| |)",
        R"(| |  | |)",
        R"(|_|  |_|)",
        R"(        )"},
    {
        R"( _   _ )",
        R"(| \ | |)",
        R"(|  \| |)",
        R"(| |\  |)",
        R"(|_| \_|)",
        R"(       )"},
    {
        R"(  ___  )",
        R"( / _ \ )",
        R"(| | | |)",
        R"(| |_| |)",
        R"( \___/ )",
        R"(       )"},
    {
        R"( ____  )",
        R"(|  _ \ )",
        R"(| |_) |)",
        R"(|  __/ )",
        R"(|_|    )",
        R"(       )"},
    {
        R"(  ___  )",
        R"( / _ \ )",
        R"(| | | |)",
        R"(| |_| |)",
        R"( \__\_\)",
        R"(       )"},
    {
        R"( ____  )",
        R"(|  _ \ )",
        R"(| |_) |)",
        R"(|  _ < )",
        R"(|_| \_\)",
        R"(       )"},
    {
        R"( ____  )",
        R"(/ ___| )",
        R"(\___ \ )",
        R"( ___) |)",
        R"(|____/ )",
        R"(       )"},
    {
        R"( _____ )",
        R"(|_   _|)",
        R"(  | |  )",
        R"(  | |  )",
        R"(  |_|  )",
        R"(       )"},
    {
        R"( _   _ )",
        R"(| | | |)",
        R"(| | | |)",
        R"(| |_| |)",
        R"( \___/ )",
        R"(       )"},
    {
        R"(__     __)",
        R"(\ \   / /)",
        R"( \ \ / / )",
        R"(  \ V /  )",
        R"(   \_/   )",
        R"(         )"},
    {
        R"(__        __)",
        R"(\ \      / /)",
        R"( \ \ /\ / / )",
        R"(  \ V  V /  )",
        R"(   \_/\_/   )",
        R"(            )"},
    {
        R"(__  __)",
        R"(\ \/ /)",
        R"( \  / )",
        R"( /  \ )",
        R"(/_/\_\)",
        R"(      )"},
    {
        R"(__   __)",
        R"(\ \ / /)",
        R"( \ V / )",
        R"(  | |  )",
        R"(  |_|  )",
        R"(       )"},
    {
        R"( _____)",
        R"(|__  /)",
        R"(  / / )",
        R"( / /_ )",
        R"(/____|)",
        R"(      )"},
    {
        R"( __ )",
        R"(| _|)",
        R"(| | )",
        R"(| | )",
        R"(| | )",
        R"(|__|)"},
    {
        R"( )",
        R"( )",
        R"( )",
        R"( )",
        R"( )",
        R"( )"},
    {
        R"( __ )",
        R"(|_ |)",
        R"( | |)",
        R"( | |)",
        R"( | |)",
        R"(|__|)"},
    {
        R"( /\ )",
        R"(|/\|)",
        R"(    )",
        R"(    )",
        R"(    )",
        R"(    )"},
    {
        R"(       )",
        R"(       )",
        R"(       )",
        R"(       )",
        R"( _____ )",
        R"(|_____|)"},
    {
        R"( _ )",
        R"(( ))",
        R"( \|)",
        R"(   )",
        R"(   )",
        R"(   )"},
    {
        R"(       )",
        R"(  __ _ )",
        R"( / _` |)",
        R"(| (_| |)",
        R"( \__,_|)",
        R"(       )"},
    {
        R"( _     )",
        R"(| |__  )",
        R"(| '_ \ )",
        R"(| |_) |)",
        R"(|_.__/ )",
        R"(       )"},
    {
        R"(      )",
        R"(  ___ )",
        R"( / __|)",
        R"(| (__ )",
        R"( \___|)",
        R"(      )"},
    {
        R"(     _ )",
        R"(  __| |)",
        R"( / _` |)",
        R"(| (_| |)",
        R"( \__,_|)",
        R"(       )"},
    {
        R"(      )",
        R"(  ___ )",
        R"( / _ \)",
        R"(|  __/)",
        R"( \___|)",
        R"(      )"},
    {
        R"(  __ )",
        R"( / _|)",
        R"(| |_ )",
        R"(|  _|)",
        R"(|_|  )",
        R"(     )"},
    {
        R"(       )",
        R"(  __ _ )",
        R"( / _` |)",
        R"(| (_| |)",
        R"( \__, |)",
        R"( |___/ )"},
    {
        R"( _     )",
        R"(| |__  )",
        R"(| '_ \ )",
        R"(| | | |)",
        R"(|_| |_|)",
        R"(       )"},
    {
        R"( _ )",
        R"((_))",
        R"(| |)",
        R"(| |)",
        R"(|_|)",
        R"(   )"},
    {
        R"(   _ )",
        R"(  (_))",
        R"(  | |)",
        R"(  | |)",
        R"( _/ |)",
        R"(|__/ )"},
    {
        R"( _    )",
        R"(| | __)",
        R"(| |/ /)",
        R"(|   < )",
        R"(|_|\_\)",
        R"(      )"},
    {
        R"( _ )",
        R"(| |)",
        R"(| |)",
        R"(| |)",
        R"(|_|)",
        R"(   )"},
    {
        R"(           )",
        R"( _ __ ___  )",
        R"(| '_ ` _ \ )",
        R"(| | | | | |)",
        R"(|_| |_| |_|)",
        R"(           )"},
    {
        R"(       )",
        R"( _ __  )",
        R"(| '_ \ )",
        R"(| | | |)",
        R"(|_| |_|)",
        R"(       )"},
    {
        R"(       )",
        R"(  ___  )",
        R"( / _ \ )",
        R"(| (_) |)",
        R"( \___/ )",
        R"(       )"},
    {
        R"(       )",
        R"( _ __  )",
        R"(| '_ \ )",
        R"(| |_) |)",
        R"(| .__/ )",
        R"(|_|    )"},
    {
        R"(       )",
        R"(  __ _ )",
        R"( / _` |)",
        R"(| (_| |)",
        R"( \__, |)",
        R"(    |_|)"},
    {
        R"(      )",
        R"( _ __ )",
        R"(| '__|)",
        R"(| |   )",
        R"(|_|   )",
        R"(      )"},
    {
        R"(     )",
        R"( ___ )",
        R"(/ __|)",
        R"(\__ \)",
        R"(|___/)",
        R"(     )"},
    {
        R"( _   )",
        R"(| |_ )",
        R"(| __|)",
        R"(| |_ )",
        R"( \__|)",
        R"(     )"},
    {
        R"(       )",
        R"( _   _ )",
        R"(| | | |)",
        R"(| |_| |)",
        R"( \__,_|)",
        R"(       )"},
    {
        R"(       )",
        R"(__   __)",
        R"(\ \ / /)",
        R"( \ V / )",
        R"(  \_/  )",
        R"(       )"},
    {
        R"(          )",
        R"(__      __)",
        R"(\ \ /\ / /)",
        R"( \ V  V / )",
        R"(  \_/\_/  )",
        R"(          )"},
    {
        R"(      )",
        R"(__  __)",
        R"(\ \/ /)",
        R"( >  < )",
        R"(/_/\_\)",
        R"(      )"},
    {
        R"(       )",
        R"( _   _ )",
        R"(| | | |)",
        R"(| |_| |)",
        R"( \__, |)",
        R"( |___/ )"},
    {
        R"(     )",
        R"( ____)",
        R"(|_  /)",
        R"( / / )",
        R"(/___|)",
        R"(     )"},
    {
        R"(   __)",
        R"(  / /)",
        R"( | | )",
        R"(< <  )",
        R"( | | )",
        R"(  \_\)"},
    {
        R"( _ )",
        R"(| |)",
        R"(| |)",
        R"(| |)",
        R"(| |)",
        R"(|_|)"},
    {
        R"(__   )",
        R"(\ \  )",
        R"( | | )",
        R"(  > >)",
        R"( | | )",
        R"(/_/  )"},
    {
        R"( /\/|)",
        R"(|/\/ )",
        R"(     )",
        R"(     )",
        R"(     )",
        R"(     )"},
    {"","","","","",""},
};

void prettyascii(string content, string &btf){
    string ans;
    for (int k=0;k<6;k++){
        for (int i=0;i<content.size();i++){
            char ch = content[i];
            if (ch != ' '){
                string chr = ascii[ch][k];
                if (i == 0)
                    ans += chr;
                else if (ans[ans.size()-1] != ' ') 
                    ans += chr.substr(1,chr.size());
                else
                    ans = ans.substr(0,ans.size()-1) + chr;
            } else {
                ans += "  ";
            }
        }
        ans += "\n";
    }
    btf = ans;
};

#endif