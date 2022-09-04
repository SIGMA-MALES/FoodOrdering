#include <iostream>

#include <cmath>

using namespace std;

int main() {

    int opt;

    double b1,b2,b3,b4,b5,b6,b7;

    string z, y, x, w;

    cout << "Hello, Welcome to HOME-FOOD app\n" << endl;

    cout << "Please create a new Account" << endl;

    cout << "Choose an USERNAME : ";

    string user;

    getline(cin, user);

    cout << "Password must be of 8 digits : " << endl;

    cout << "Choose a PASSWORD : ";

    string pass;

    getline(cin, pass);

    while (pass.size() < 8) {

        cout << "Invalid input, Please re-enter password" << endl;

        cin >> pass;

    }

    cout << "\nPlease re-enter your Information to Confirm :-" << endl;

    cout << "Enter the USERNAME that you have created : " << endl;

    string username;

    getline(cin, username);

    cout << "Enter the PASSWORD that you have created : " << endl;

    string password;

    getline(cin, password);



    while (username != user || password != pass) {

        cout << "Worng USERNAME or PASSWORD please try again" << endl;

        cout << "USERNAME:" << endl;

        getline(cin, username);

        cout << "PASSWORD:" << endl;

        getline(cin, password);

    }

    double balance=100;

    double add1;

    cout << "\nWelcome to the PIZZA app:)" << endl;

    cout << "\nYour balance is $" << balance << endl;

    cout << "Would you like to add Money to your balance?" << endl;

    string bal, meal;

    getline(cin, bal);

    if (bal == "yes") {

        cout << "Enter how much money you want to add : " << endl;

        cin >> add1;

        b1=balance+add1;

        cout << "Your new balance is $" << b1 << endl;

    } else {

        cout << "Alright" << endl;

    }

    cout << "Would you like a meal today?" << endl;

    cin >> meal;

    if (meal == "yes") {

        cout << "Would you like to have a Pizza(yes/no) : ";

        cin >> x;

        if (x == "yes") {

            cout << "Please select what Pizza you want : " << endl;

            double pizzaprice[] = {10, 20, 30, 44, 54};

            string pizzatype[] = {"Macaroni Pizza", "Margarita Pizza", "Farmhouse Pizza", "Corn pizza",

                                  "Cheese burst pizza"};

            cout << "1. " << pizzatype[0] << " --> $" << pizzaprice[0] << endl;

            cout << "2. " << pizzatype[1] << " --> $" << pizzaprice[1] << endl;

            cout << "3. " << pizzatype[2] << " --> $" << pizzaprice[2] << endl;

            cout << "4. " << pizzatype[3] << " --> $" << pizzaprice[3] << endl;

            cout << "5. " << pizzatype[4] << " --> $" << pizzaprice[4] << endl;

            cout << "\nYour Choice : ";

            int q3;

            cin >> q3;



            while (q3 > 5 || q3 < 1) {

                cout << "This is not a valid input, please enter your choice from the given options only:)" << endl;

                cin >> q3;

            }



            if (q3 == 1) {

                cout << "You have ordered a " << pizzatype[0] << " costing you $" << pizzaprice[0] << endl;

                b2=b1 - pizzaprice[0];

                cout << "Your left balance is $" << b2 << endl;

            } else if (q3 == 2) {

                cout << "You have ordered a " << pizzatype[1] << " costing you $" << pizzaprice[1] << endl;

                b2=b1 - pizzaprice[1];

                cout << "Your left balance is $" << b2 << endl;

            } else if (q3 == 3) {

                cout << "You have ordered a " << pizzatype[2] << " costing you $" << pizzaprice[2] << endl;

                b2=b1 - pizzaprice[2];

                cout << "Your left balance is $" << b2 << endl;

            } else if (q3 == 4) {

                cout << "You have ordered a " << pizzatype[3] << " costing you $" << pizzaprice[3] << endl;

                b2=b1 - pizzaprice[3];

                cout << "Your left balance is $" << b2 << endl;

            } else if (q3 == 5) {

                cout << "You have ordered a " << pizzatype[4] << " costing you $" << pizzaprice[4] << endl;

                b2=b1 - pizzaprice[4];

                cout << "Your left balance is $" << b2 << endl;

            }

        }

        else if (x == "no") {

            cout << "Alright:)"<<endl;

        }

        cout << "Would you like to have a Burger(yes/no) : ";

        cin >> y;

        if (y == "yes") {

            cout << "Please select the Burger you want : " << endl;

            double burgerprice[] = {6, 7, 9, 10, 20};

            string burgertype[] = {"Cheese Burger", "Veggie Burger", "Turkey Burger", "Butter Burger",

                                   "Green Chile Burger"};

            cout << "1. " << burgertype[0] << " --> $" << burgerprice[0] << endl;

            cout << "2. " << burgertype[1] << " --> $" << burgerprice[1] << endl;

            cout << "3. " << burgertype[2] << " --> $" << burgerprice[2] << endl;

            cout << "4. " << burgertype[3] << " --> $" << burgerprice[3] << endl;

            cout << "5. " << burgertype[4] << " --> $" << burgerprice[4] << endl;





            cout << "\nYour Choice : ";

            int q4;

            cin >> q4;



            while (q4 > 5 || q4 < 1) {

                cout << "This is not a valid input, please enter your choice from the given options only:)" << endl;

                cin >> q4;

            }



            if (q4 == 1) {

                cout << "You have ordered a " << burgertype[0] << " costing you $" << burgerprice[0] << endl;

                b3=b2 - burgerprice[0];

                cout << "Your left balance is $" << b3 << endl;

            } else if (q4 == 2) {

                cout << "You have ordered a " << burgertype[1] << " costing you $" << burgerprice[1] << endl;

                b3=b2 - burgerprice[1];

                cout << "Your left balance is $" << b3 << endl;

            } else if (q4 == 3) {

                cout << "You have ordered a " << burgertype[2] << " costing you $" << burgerprice[2] << endl;

                b3=b2 - burgerprice[2];

                cout << "Your left balance is $" << b3 << endl;

            } else if (q4 == 4) {

                cout << "You have ordered a " << burgertype[3] << " costing you $" << burgerprice[3] << endl;

                b3=b2 - burgerprice[3];

                cout << "Your left balance is $" << b3 << endl;

            } else if (q4 == 5) {

                cout << "You have ordered a " << burgertype[4] << " costing you $" << burgerprice[4] << endl;

                b3=b2 - burgerprice[4];

                cout << "Your left balance is $" << b3 << endl;

            }

        }

        else if (y == "no") {

            cout << "Fine:)"<<endl;



        }

        cout << "Would you like to have a Sandwich(yes/no) : ";

        cin >> z;

        if (z == "yes") {

            cout << "Please select the Sandwich you want :" << endl;

            double sandwichprice[] = {3, 5, 4, 9, 15};

            string sandwichtype[] = {"Veggie Sandwich", "Aloo Sandwich", "Roast Beaf Sandwich", "Nutella Sandwich",

                                     "Grilled Cheese Sandwich"};

            cout << "1. " << sandwichtype[0] << " --> $" << sandwichprice[0] << endl;

            cout << "2. " << sandwichtype[1] << " --> $" << sandwichprice[1] << endl;

            cout << "3. " << sandwichtype[2] << " --> $" << sandwichprice[2] << endl;

            cout << "4. " << sandwichtype[3] << " --> $" << sandwichprice[3] << endl;

            cout << "5. " << sandwichtype[4] << " --> $" << sandwichprice[4] << endl;





            cout << "\nYour Choice : ";

            int q5;

            cin >> q5;



            while (q5 > 5 || q5 < 1) {

                cout << "This is not a valid input, please enter your choice from the given options only:)" << endl;

                cin >> q5;

            }



            if (q5 == 1) {

                cout << "You have ordered a " << sandwichtype[0] << " costing you $" << sandwichprice[0] << endl;

                b4=b3 - sandwichprice[0];

                cout << "Your left balance is $" << b4 << endl;

            } else if (q5 == 2) {

                cout << "You have ordered a " << sandwichtype[1] << " costing you $" << sandwichprice[1] << endl;

                b4=b3 - sandwichprice[1];

                cout << "Your left balance is $" << b4 << endl;

            } else if (q5 == 3) {

                cout << "You have ordered a " << sandwichtype[2] << " costing you $" << sandwichprice[2] << endl;

                b4=b3 - sandwichprice[2];

                cout << "Your left balance is $" << b4 << endl;

            } else if (q5 == 4) {

                cout << "You have ordered a " << sandwichtype[3] << " costing you $" << sandwichprice[3] << endl;

                b4=b3 - sandwichprice[3];

                cout << "Your left balance is $" << b4 << endl;

            } else if (q5 == 5) {

                cout << "You have ordered a " << sandwichtype[4] << " costing you $" << sandwichprice[4] << endl;

                b4=b3 - sandwichprice[4];

                cout << "Your left balance is $" << b4 << endl;

            }

        } else if ("no") {

            cout << "No Problem:)"<<endl;

        }

        cout << "Would you prefer any AddOns to go with it(yes/no) : ";

        cin >> w;

        if (w == "yes")

        {

            cout << "Would you like to have Soft Drink : " << endl;

            string p;

            cin>>p;

              if(p == "yes"){

                cout << "Following are the available softdrinks : "<<endl;

                double softprice[] = {3, 3, 3, 5, 7};

                string softtype[] = {"Cola", "Pepsi", "Sprite", "Sparkling Water", "Ginger Ale"};

                cout << "1. " << softtype[0] << " --> $" << softprice[0] << endl;

                cout << "2. " << softtype[1] << " --> $" << softprice[1] << endl;

                cout << "3. " << softtype[2] << " --> $" << softprice[2] << endl;

                cout << "4. " << softtype[3] << " --> $" << softprice[3] << endl;

                cout << "5. " << softtype[4] << " --> $" << softprice[4] << endl;

                cout << "\nYour Choice : ";

                int q6;

                cin >> q6;



                while (q6 > 5 || q6 < 1)

                {

                    cout << "This is not a valid input, please enter your choice from the given options only:)"

                         << endl;

                    cin >> q6;

                }

                if (q6 == 1)

                {

                    cout << "You have ordered a " << softtype[0] << " costing you $" << softprice[0] << endl;

                    b5=b4 - softprice[4];

                    cout << "Your left balance is $" << b5 << endl;

                } else if (q6 == 2) {

                    cout << "You have ordered a " << softtype[1] << " costing you $" << softprice[1] << endl;

                    b5=b4 - softprice[4];

                    cout << "Your left balance is $" << b5 << endl;

                } else if (q6 == 3) {

                    cout << "You have ordered a " << softtype[2] << " costing you $" << softprice[2] << endl;

                    b5=b4 - softprice[4];

                    cout << "Your left balance is $" << b5 << endl;

                } else if (q6 == 4) {

                    cout << "You have ordered a " << softtype[3] << " costing you $" << softprice[3] << endl;

                    b5=b4 - softprice[4];

                    cout << "Your left balance is $" << b5 << endl;

                } else if (q6 == 5) {

                    cout << "You have ordered a " << softtype[4] << " costing you $" << softprice[4] << endl;

                    b5=b4 - softprice[4];

                    cout << "Your left balance is $" << b5 << endl;

                }

            }

              else{

                  cout<<"Alright!"<<endl;

              }



            cout << "Would you like to have Juice : " << endl;

            string q;

            cin>>q;

            if(q=="yes"){

                double juiceprice[] = {3, 3, 3, 5, 7};

                string juicetype[] = {"Apple Juice", "Pomegranate Juice", "Cranberry Juice", "Avocado Juice", "Beet Juice"};

                cout << "1. " << juicetype[0] << " --> $" << juiceprice[0] << endl;

                cout << "2. " << juicetype[1] << " --> $" << juiceprice[1] << endl;

                cout << "3. " << juicetype[2] << " --> $" << juiceprice[2] << endl;

                cout << "4. " << juicetype[3] << " --> $" << juiceprice[3] << endl;

                cout << "5. " << juicetype[4] << " --> $" << juiceprice[4] << endl;

                cout << "Your Choice : ";

                int q7;

                cin >> q7;



                while (q7 > 5 || q7 < 1) {

                    cout << "This is not a valid input, please enter your choice from the given options only:)"

                         << endl;

                    cin >> q7;

                }



                if (q7 == 1)

                {

                    cout << "You have ordered a " << juicetype[0] << " costing you $" << juiceprice[0] << endl;

                    b6=b5 - juiceprice[0];

                    cout << "Your left balance is $" << b6 << endl;

                } else if (q7 == 2) {

                    cout << "You have ordered a " << juicetype[1] << " costing you $" << juiceprice[1] << endl;

                    b6=b5 - juiceprice[1];

                    cout << "Your left balance is $" << b6 << endl;

                } else if (q7 == 3) {

                    cout << "You have ordered a " << juicetype[2] << " costing you $" << juiceprice[2] << endl;

                    b6=b5 - juiceprice[2];

                    cout << "Your left balance is $" << b6 << endl;

                } else if (q7 == 4) {

                    cout << "You have ordered a " << juicetype[3] << " costing you $" << juiceprice[3] << endl;

                    b6=b5 - juiceprice[3];

                    cout << "Your left balance is $" << b6 << endl;

                } else if (q7 == 5) {

                    cout << "You have ordered a " << juicetype[4] << " costing you $" << juiceprice[4] << endl;

                    b6=b5 - juiceprice[4];

                    cout << "Your left balance is $" << b6 << endl;

                }

            }

            else{

                cout<<"Alright!"<<endl;

            }

            cout << "Would you like to have Ice cream : " << endl;

            string r;

            cin>>r;

            if(r=="yes"){

                double iceprice[] = {3, 3, 3, 5, 7};

                string icetype[] = {"Gelato", "Sorbet", "Kulfi", "Mint Chocolate Chip","Belgian Chocolate Chip"};

                cout << "1. " << icetype[0] << " --> $" << iceprice[0] << endl;

                cout << "2. " << icetype[1] << " --> $" << iceprice[1] << endl;

                cout << "3. " << icetype[2] << " --> $" << iceprice[2] << endl;

                cout << "4. " << icetype[3] << " --> $" << iceprice[3] << endl;

                cout << "5. " << icetype[4] << " --> $" << iceprice[4] << endl;

                cout << "Your Choice : ";

                int q7;

                cin >> q7;



                while (q7 > 5 || q7 < 1) {

                    cout << "This is not a valid input, please enter your choice from the given options only:)"

                         << endl;

                    cin >> q7;

                }



                if (q7 == 1)

                {

                    cout << "You have ordered a " << icetype[0] << " costing you $" << iceprice[0] << endl;

                    b7=b6 - iceprice[0];

                    cout << "Your left balance is $" << b7 << endl;

                    cout<<"\n(:Thanks! for visiting:)"<<endl<< "(:Have a nice Day:)";

                } else if (q7 == 2) {

                    cout << "You have ordered a " << icetype[1] << " costing you $" << iceprice[1] << endl;

                    b7=b6 - iceprice[1];

                    cout << "Your left balance is $" << b7 << endl;

                    cout<<"\n(:Thanks! for visiting:)"<<endl<< "(:Have a nice Day:)";

                } else if (q7 == 3) {

                    cout << "You have ordered a " << icetype[2] << " costing you $" << iceprice[2] << endl;

                    b7=b6 - iceprice[2];

                    cout << "Your left balance is $" << b7 << endl;

                    cout<<"\n(:Thanks! for visiting:)"<<endl<< "(:Have a nice Day:)";

                } else if (q7 == 4) {

                    cout << "You have ordered a " << icetype[3] << " costing you $" << iceprice[3] << endl;

                    b7=b6 - iceprice[3];

                    cout << "Your left balance is $" << b7 << endl;

                    cout<<"\n(:Thanks! for visiting:)"<<endl<< "(:Have a nice Day:)";

                } else if (q7 == 5) {

                    cout << "You have ordered a " << icetype[4] << " costing you $" << iceprice[4] << endl;

                    b7=b6 - iceprice[4];

                    cout << "Your left balance is $" << b7 << endl;

                    cout<<"\n(:Thanks! for visiting:)"<<endl<< "(:Have a nice Day:)";

                }

            }

            else{

                cout<<"Alright!"<<endl;

                cout<<"(:Thanks! for visiting:)"<<endl<< "(:Have a nice Day:)";

            }

            }

        else
        {

            cout<<"(:Thanks! for visiting:)"<<endl<< "(:Have a nice Day:)";

        }

    }
    else {

        cout<<"(:Thanks! for visiting:)"<<endl<< "(:Have a nice Day:)";

    }

}
