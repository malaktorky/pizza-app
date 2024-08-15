#include <iostream>
#include <string>
using namespace std;

string pizza_Adds;
int pizza_num = 1;
int adds_num;
string name;
int phone_num;
string street;
int home_num;
int rate;
string payment;
string pizzaTypes[] = {"Chicken", "Beef", "Vegetables", "Margherita"};
int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int x;
int y;
int z;
const int maxPizzas = 50;
string selectedAdd;
string selectedPizzas = "";
int numSelectedPizzas = 0;

void PizzaTypes1() // Display the menu
{
    cout << "\n----------------------- Welcome to your Pizza App -----------------------\n";
    cout << "Pizza Types:\n";
    cout << "The price of any pizza = 200 EGP\n";
    for (int i = 0; i < 4; i++)
    {
        cout << num[i] << "- " << pizzaTypes[i] << "\n";
    }
    cout << "********\n";
}

void PizzaTypes2() // Choose which type of pizza
{
    string Chicken[] = {"Ranch Chicken", "BBQ Chicken", "Super Supreme Pizza"};
    string Beef[] = {"Pepperoni", "Meatballs", "Ground beef"};
    cout << "********\n";
    cin >> z; // z is a global variable
    cout << "********\n";
    
    if (z == 1)
    {
        cout << "You have 3 Types of Chicken Pizza\n";
        for (int i = 0; i < 3; i++)
        {
            cout << num[i] << "- " << Chicken[i] << endl;
        }
        cout << "********\n";
        cout << "Please Choose Your Type Of Chicken Pizza\n";
        cout << "********\n";
        cin >> x;
        switch (x)
        {
            case 1:
                cout << "You chose Ranch Chicken \n";
                selectedPizzas += "Ranch Chicken, ";
                break;
            case 2:
                cout << "You chose BBQ Chicken \n";
                selectedPizzas += "BBQ Chicken, ";
                break;
            case 3:
                cout << "You chose Super Supreme Pizza \n";
                selectedPizzas += "Super Supreme Pizza, ";
                break;
            default:
                cout << "Invalid choice.\n";
                break;
        }
    }
    else if (z == 2)
    {
        cout << "********\n";
        cout << "You have 3 Types of Beef Pizza\n";
        for (int j = 0; j < 3; j++)
        {
            cout << num[j] << "- " << Beef[j] << endl;
        }
        cout << "********\n";
        cout << "Please Choose Your Type Of Beef Pizza\n";
        cout << "********\n";
        cin >> y;
        switch (y)
        {
            case 1:
                cout << "You chose Pepperoni \n";
                selectedPizzas += "Pepperoni, ";
                break;
            case 2:
                cout << "You chose Meatballs \n";
                selectedPizzas += "Meatballs, ";
                break;
            case 3:
                cout << "You chose Ground beef \n";
                selectedPizzas += "Ground beef, ";
                break;
            default:
                cout << "Invalid choice.\n";
                break;
        }
    }
    else if (z == 3)
    {
        cout << "You chose Vegetarian \n";
        cout << "********\n";
        selectedPizzas += "Vegetarian, ";
    }
    else if (z == 4)
    {
        cout << "You chose Margherita \n";
        cout << "********\n";
        selectedPizzas += "Margherita, ";
    }
    else
    {
        while (z > 4)
        {
            cout << "Wrong, Please try again \n";
            cin >> z;
            if (z == 1)
            {
                cout << "You have 3 Types of Chicken Pizza\n";
                for (int i = 0; i < 3; i++)
                {
                    cout << num[i] << "- " << Chicken[i] << endl;
                }
                cout << "********\n";
                cout << "Please Choose Your Type Of Chicken Pizza\n";
                cout << "********\n";
                cin >> x;
                switch (x)
                {
                    case 1:
                        cout << "You chose Ranch Chicken \n";
                        selectedPizzas += "Ranch Chicken, ";
                        break;
                    case 2:
                        cout << "You chose BBQ Chicken \n";
                        selectedPizzas += "BBQ Chicken, ";
                        break;
                    case 3:
                        cout << "You chose Super Supreme Pizza \n";
                        selectedPizzas += "Super Supreme Pizza, ";
                        break;
                    default:
                        cout << "Invalid choice.\n";
                        break;
                }
            }
            else if (z == 2)
            {
                cout << "********\n";
                cout << "You have 3 Types of Beef Pizza\n";
                for (int j = 0; j < 3; j++)
                {
                    cout << num[j] << "- " << Beef[j] << endl;
                }
                cout << "********\n";
                cout << "Please Choose Your Type Of Beef Pizza\n";
                cout << "********\n";
                cin >> y;
                switch (y)
                {
                    case 1:
                        cout << "You chose Pepperoni \n";
                        selectedPizzas += "Pepperoni, ";
                        break;
                    case 2:
                        cout << "You chose Meatballs \n";
                        selectedPizzas += "Meatballs, ";
                        break;
                    case 3:
                        cout << "You chose Ground beef \n";
                        selectedPizzas += "Ground beef, ";
                        break;
                    default:
                        cout << "Invalid choice.\n";
                        break;
                }
            }
            else if (z == 3)
            {
                cout << "You chose Vegetarian \n";
                cout << "********\n";
                selectedPizzas += "Vegetarian, ";
            }
            else if (z == 4)
            {
                cout << "You chose Margherita \n";
                cout << "********\n";
                selectedPizzas += "Margherita, ";
            }
        }
    }
}

void pizza_adds() // Display the adds and take it from user
{
    int choise_num;
    cout << "********\n";
    cout << "The price of any add is 5 EGP\n";
    pizza_Adds = "1-Mozzarella\n2-Pepperoni\n3-Pickles\n4-Salad\n5-Onion\n6-Coleslaw\n7-Fries\n8-Beef\n9-Pineapple\n10-Ketchup\n11-Melted cheese\n12-Spiro spathes\n13-No adds\n\n";

    int count = 0;
    cout << "ADDS :\n\n";
    cout << pizza_Adds;
    cout << "********\n";
    cout << "How many adds do you want? \n";
    cin >> adds_num;
    cout << "Which adds do you want (click num)? \n";
    while (count < adds_num)
    {
        cin >> choise_num;
        switch (choise_num)
        {
            case 1:
                cout << "Your choice is: Mozzarella \n";
                selectedAdd += "Mozzarella, ";
                break;
            case 2:
                cout << "Your choice is: Pepperoni \n";
                selectedAdd += "Pepperoni, ";
                break;
            case 3:
                cout << "Your choice is: Pickles \n";
                selectedAdd += "Pickles, ";
                break;
            case 4:
                cout << "Your choice is: Salad \n";
                selectedAdd += "Salad, ";
                break;
            case 5:
                cout << "Your choice is: Onion \n";
                selectedAdd += "Onion, ";
                break;
            case 6:
                cout << "Your choice is: Coleslaw \n";
                selectedAdd += "Coleslaw, ";
                break;
            case 7:
                cout << "Your choice is: Fries \n";
                selectedAdd += "Fries, ";
                break;
            case 8:
                cout << "Your choice is: Beef \n";
                selectedAdd += "Beef, ";
                break;
            case 9:
                cout << "Your choice is: Pineapple \n";
                selectedAdd += "Pineapple, ";
                break;
            case 10:
                cout << "Your choice is: Ketchup \n";
                selectedAdd += "Ketchup, ";
                break;
            case 11:
                cout << "Your choice is: Melted cheese \n";
                selectedAdd += "Melted cheese, ";
                break;
            case 12:
                cout << "Your choice is: Spiro spathes \n";
                selectedAdd += "Spiro spathes, ";
                break;
            case 13:
                selectedAdd += "None";
                break;
            default:
                cout << "Invalid choice.\n";
                break;
        }
        count++;
    }
}

void communication() // Take customer data
{
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your phone number: ";
    cin >> phone_num;
    cout << "Enter your street address: ";
    cin.ignore(); // Ignore newline character left by previous input
    getline(cin, street);
    cout << "Enter your home number: ";
    cin >> home_num;
}

void receipt() // Print receipt
{
    cout << "\n******** Receipt ********\n";
    cout << "Customer Name: " << name << endl;
    cout << "Phone Number: " << phone_num << endl;
    cout << "Address: " << street << ", Home Number: " << home_num << endl;
    cout << "Selected Pizzas: " << selectedPizzas << endl;
    cout << "Selected Add-ons: " << selectedAdd << endl;
    cout << "Total Pizza Cost: " << (200 * (numSelectedPizzas)) << " EGP" << endl;
    cout << "Total Add-ons Cost: " << (5 * (adds_num)) << " EGP" << endl;
    cout << "Total Cost: " << (200 * (numSelectedPizzas) + 5 * (adds_num)) << " EGP" << endl;
    cout << "******** Thank you for ordering! ********\n";
}

int main()
{
    PizzaTypes1();
    PizzaTypes2();
    pizza_adds();
    communication();
    receipt();
    return 0;
}

