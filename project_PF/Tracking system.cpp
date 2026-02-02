#include <iostream>
#include <string>
using namespace std;

struct Experience {
    int id;
    string title;
    string description;
    string date;
};

Experience exp[50];
int countExp = 0;

void addExperience() {
    cout << "\nEnter Experience ID: ";
    cin >> exp[countExp].id;
    cin.ignore();

    cout << "Enter Experience Title: ";
    getline(cin, exp[countExp].title);

    cout << "Enter Experience Description: ";
    getline(cin, exp[countExp].description);

    cout << "Enter Date (DD/MM/YYYY): ";
    getline(cin, exp[countExp].date);

    countExp++;
    cout << "\n✅ Experience added successfully!\n";
}

void viewExperiences() {
    if (countExp == 0) {
        cout << "\n❌ No experiences available.\n";
        return;
    }

    cout << "\n📘 All Experiences:\n";
    for (int i = 0; i < countExp; i++) {
        cout << "\nID: " << exp[i].id;
        cout << "\nTitle: " << exp[i].title;
        cout << "\nDescription: " << exp[i].description;
        cout << "\nDate: " << exp[i].date;
        cout << "\n----------------------------";
    }
}

void searchExperience() {
    string searchTitle;
    bool found = false;

    cin.ignore();
    cout << "\nEnter title to search: ";
    getline(cin, searchTitle);

    for (int i = 0; i < countExp; i++) {
        if (exp[i].title == searchTitle) {
            cout << "\n✅ Experience Found!";
            cout << "\nID: " << exp[i].id;
            cout << "\nDescription: " << exp[i].description;
            cout << "\nDate: " << exp[i].date;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "\n❌ Experience not found.\n";
}

void deleteExperience() {
    int deleteID;
    bool found = false;

    cout << "\nEnter Experience ID to delete: ";
    cin >> deleteID;

    for (int i = 0; i < countExp; i++) {
        if (exp[i].id == deleteID) {
            for (int j = i; j < countExp - 1; j++) {
                exp[j] = exp[j + 1];
            }
            countExp--;
            found = true;
            cout << "\n✅ Experience deleted successfully!\n";
            break;
        }
    }

    if (!found)
        cout << "\n❌ Experience not found.\n";
}

int main() {
    int choice;

    do {
        cout << "\n==============================";
        cout << "\n Personal Experience Tracker ";
        cout << "\n==============================";
        cout << "\n1. Add Experience";
        cout << "\n2. View Experiences";
        cout << "\n3. Search Experience";
        cout << "\n4. Delete Experience";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addExperience(); break;
            case 2: viewExperiences(); break;
            case 3: searchExperience(); break;
            case 4: deleteExperience(); break;
            case 5: cout << "\n👋 Exiting program...\n"; break;
            default: cout << "\n❌ Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}