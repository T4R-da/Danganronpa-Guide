#include <iostream>
#include <cstdlib>
#include "guides.hpp"
using namespace std;

int main()
{
    for (int i = 0; i < 10; i++)
    {
        // Game selection
        cout << "Danganronpa Trigger Happy Havoc = 1 \n";
        cout << "Danganronpa 2: Goodbye Despair = 2 \n";
        cout << "Danganronpa V3: Killing Harmony = 3 \n";

        int game;
        do {
            cout << "\nWhich game do you need help with? ";
            cin >> game;
        } while (game < 1 || game > 3);

        // Chapter selection
        cout << "\nPrologue = 0\n";
        int chapter;
        do {
            cout << "\nThere is a Prologue and 6 chapters, which one do you need help with? ";
            cin >> chapter;
        } while (chapter < 0 || chapter > 6);

        int part = 0;

        if (chapter == 0) {
            // Prologue has no parts
            part = 0;
        } else if (chapter == 6) {
            // Chapter 6 has 2 parts
            cout << "\nFor this chapter there are 2 parts:\n";
            cout << "1 = Daily Life / Deadly Life\n";
            cout << "2 = Class Trial\n";
            do {
                cout << "\nWhich part do you need help with? ";
                cin >> part;
            } while (part < 1 || part > 2);
        } else {
            // Chapters 1-5 have 3 parts
            cout << "\nFor this chapter there are 3 parts:\n";
            cout << "1 = Daily Life\n";
            cout << "2 = Deadly Life\n";
            cout << "3 = Class Trial\n";
            do {
                cout << "\nWhich part do you need help with? ";
                cin >> part;
            } while (part < 1 || part > 3);
        }

        cout << endl << GetGuide(game, chapter, part);

        char again;
        cout << "\n\nDo you need help with other chapters? (y/n) ";
        cin >> again;

        if (again == 'y') {
            system("cls");
        } else {
            cout << "\n-END-\n";
            break;
        }
    }

    // This stops the code from closing immediately after running
    int pause; cin >> pause;
    return 0;
}