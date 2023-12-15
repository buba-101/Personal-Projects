#include <iostream>

using namespace std;

int main()
{
    int option, n;
    float V,tR, I, R, sR = 0;

    cout << "[Basic Circuitry]\n";

    cout << "What is the voltage of the source being used:";
    cin >> V;

    cout << "What is the initial resistance of the circuit:";
    cin >> tR;

    do
    {
        cout << "1) Add a resistor in series.\n";
        cout << "2) Add a resistor in parallel.\n";
        cout << "3) Build this circuit.\n\n";

        cout << "What would you like to do with this circuit:";
        cin >> option;

        switch (option)
        {
            case 1:

                cout << "How many resistors will be in series:";
                cin >> n;

                for (int i = 1; i <= n; i++)
                {
                    cout << "Resistor " << i << " value:";
                    cin >> R;

                    tR += R;

                }

                break;

            case 2:

                cout << "How many resistors will be in series, parallel to the resistor:";
                cin >> n;

                for (int i = 1; i <= n; i++)
                {
                    cout << "Resistor " << i << " value:";
                    cin >> R;

                    sR += R;

                }

                tR = 1 / ((1 / tR) + (1 / sR));

                break;

            case 3:
                I = (V/tR);

                cout << "The total voltage is " << V <<"V.\n";
                cout << "The total current in this circuit is " << I <<"A.\n";
                cout << "The total Resistance in this circuit is " << tR <<" ohms.\n";

                break;
            default:
                cout << "Invalid choice, try again.\n";
        }

    } while (option != 3);
}