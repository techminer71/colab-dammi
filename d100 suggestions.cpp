#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
using namespace std;

/*********************************
    Choose what list you want
**********************************/

int main()
 {

    string list;

    srand((unsigned) time(0));

    while (list != "end"){

        cout << "What list would you like to open?\n" << "list Codes:\n     Minor Magic Items: MMI\n     Voice Acting Ideas: VAI\n     Bag of Holding Used Items: BOH\n     NPC Generator: NPC" << endl;

        cin >> list;

        if (list == "MMI" || list == "mmi"){

        }
        else if (list == "VAI" || list == "vai"){

        }
        else if (list == "BOH" || list == "boh"){
            
        }
        else if (list == "NPC" || list == "npc"){
            
        }
        else
        {
            cout << "Thats not currently a list but if there is one you would like to add Notify me" << endl;
        }
        
    }
    return 0;
}

/******************************
    Minor Magic Items list MMI
*******************************/

int minmagic()
{

}

/*************************
    Voice Acting list VAI
**************************/

int voice()
{

}

/********************************
    Bag of Holding Used Items BOH
*********************************/

int usedboh()
{

}

/****************************
    Random NPC Generator NPC
*****************************/

int randnpc()
{

}