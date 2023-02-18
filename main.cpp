#include <iostream>

using namespace std;

int main()
{
    int uInput,fNum,sNum,ans;
    cout << "===================================" << endl;
    cout << "************CALCULATOR*************" << endl;
    cout << "===================================" << endl;

    //Select Options
    cout << endl;
    cout << endl;
    cout << "01. Addition ( + )" << endl;
    cout << "02. Subtraction ( - )" << endl;
    cout << "03. Multiplication ( * )" << endl;
    cout << "04. Divition ( / )" << endl;
    cout << endl;
    cout << "Enter Option : ";
    cin >> uInput;
    // Enter Options

    cout << endl;
    cout << endl;

    switch (uInput)
    {
    case 1:
        cout << "===================================" << endl;
        cout << "************Addition*************" << endl;
        cout << "===================================" << endl;

        cout << "Enter Frist Number : ";
        cin >> fNum;
        cout << "Enter Second Number : ";
        cin >> sNum;
        ans = fNum + sNum;
        cout << endl;
        cout << "Answer Is : " << ans;
        break;
    case 2 :
        cout << "===================================" << endl;
        cout << "************Subtraction************" << endl;
        cout << "===================================" << endl;

        cout << "Enter Frist Number : ";
        cin >> fNum;
        cout << "Enter Second Number : ";
        cin >> sNum;
        ans = fNum - sNum;
        cout << endl;
        cout << "Answer Is : " << ans;
        break;
    case 3 :
        cout << "===================================" << endl;
        cout << "************Multiplication*********" << endl;
        cout << "===================================" << endl;

        cout << "Enter Frist Number : ";
        cin >> fNum;
        cout << "Enter Second Number : ";
        cin >> sNum;
        ans = fNum * sNum;
        cout << endl;
        cout << "Answer Is : " << ans;
        break;
    case 4 :
        cout << "===================================" << endl;
        cout << "************Divition***************" << endl;
        cout << "===================================" << endl;

        cout << "Enter Frist Number : ";
        cin >> fNum;
        cout << "Enter Second Number : ";
        cin >> sNum;
        ans = fNum / sNum;
        cout << endl;
        cout << "Answer Is : " << ans;
        break;
    default:
        cout << "Please Enter Valid Key...!  ";



    }
    return 0;
}
