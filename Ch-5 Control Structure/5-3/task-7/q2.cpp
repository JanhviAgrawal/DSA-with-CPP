#include <iostream>
using namespace std;

main()
{
    cout << "Enter 1 for English" << endl;
    cout << "Enter 2 for Hindi" << endl;
    cout << "Enter 3 for Gujarati" << endl;

    int num;
    cin >> num;

    switch (num)
    {
    case 1:
        cout << "Enter 1 for Internet Recharge" << endl;
        cout << "Enter 2 for Top-up Recharge" << endl;
        cout << "Enter 3 for Special Recharge" << endl;

        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "You have successfully done a Internet Recharge." << endl;
            break;
        case 2:
            cout << "You have successfully done a Top-up Recharge." << endl;
            break;
        case 3:
            cout << "You have successfully done a Special Recharge." << endl;
            break;
        default:
            cout << "Invalid Choice..." << endl;
        }
        break;
    case 2:
        cout << "Internet Recharge ke liye 1 dabaiye" << endl;
        cout << "Top-up Recharge ke liye 2 dabaiye" << endl;
        cout << "Special Recharge ke liye 3 dabaiye" << endl;

        // int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Aapne safaltapurvak Internet Recharge kar liya he." << endl;
            break;
        case 2:
            cout << "Aapne safaltapurvak Top-up Recharge kar liya he." << endl;
            break;
        case 3:
            cout << "Aapne safaltapurvak Special Recharge kar liya he." << endl;
            break;
        default:
            cout << "Invalid Choice..." << endl;
        }
        break;

    case 3:
        cout << "Internet Recharge mate 1 dabavo" << endl;
        cout << "Top-up Recharge mate 2 dabavo" << endl;
        cout << "Special Recharge mate 3 dabavo" << endl;

        // int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Tame safaltapurvak Internet Recharge karyu chhe." << endl;
            break;
        case 2:
            cout << "Tame safaltapurvak Top-up Recharge karyu chhe." << endl;
            break;
        case 3:
            cout << "Tame safaltapurvak Special Recharge karyu chhe." << endl;
            break;
        default:
            cout << "Invalid Choice..." << endl;
        }
        break;
    default:
        cout << "Invalid choice...";
    }
}