#include <cstdlib>
#include <iostream>
#include <limits>
#include <vector>
using namespace std;	//std::

// Function prototypes
void accountingExpandedEquation();
int netIncome();
void breakEvenPoint();
void cashRatio();
void debtToEquityRatio();
void costOfSoldGoods();
void grossProfitMargin();
void netProfitMargin();

int main() {
    int choice;
    char tryAgain;

   do {
       // Display menu

  		cout << "\n";
        cout << "\t\t|++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++|\n";
        cout << "\t\t|                Welcome to the Financial Calculator System!                   |\n";
        cout << "\t\t|  Select an exquisite option to perform sophisticated financial calculations. |\n";
        cout << "\t\t|                                                                              |\n";
        cout << "\t\t|     	1. Accounting Expanded Equation                                        |\n";
        cout << "\t\t|     	2. Net Income                                                          |\n";
        cout << "\t\t|     	3. Break Even Point                                                    |\n";
        cout << "\t\t|     	4. Cash Ratio                                                          |\n";
        cout << "\t\t|     	5. Debt to Equity Ratio                                                |\n";
        cout << "\t\t|     	6. Cost of Sold Goods                                                  |\n";
        cout << "\t\t|     	7. Gross Profit Margin                                                 |\n";
        cout << "\t\t|     	8. Net Profit Margin                                                   |\n";
        cout << "\t\t|     	9. Exit the program                                                    |\n";
        cout << "\t\t|++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++|\n";
        cout << "\n";

        // Get user input with validation
        cout << "\t\tEnter your choice: ";
        while (!(cin >> choice) || choice < 1 || choice > 9) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\t\t\tApologies, but it seems that the input provided is not valid." << endl;
            cout << "\t\t\t\tPlease enter a number between 1 and 9: ";
        }

        cout << endl;

        // Execute the selected option
        switch (choice) {
            case 1:
                cout << endl << endl;
                cout << "\t   ACCOUNTING EQUATION" << endl;
                cout << "\t=========================" << endl << endl;
                accountingExpandedEquation();
                break;
            case 2:
                cout << endl << endl;
                cout << "\t   NET INCOME" << endl;
                cout << "\t================" << endl << endl;
                netIncome();
                break;
            case 3:
                cout << endl << endl;
                cout << "\t   BREAK EVEN POINT" << endl;
                cout << "\t======================" << endl << endl;
                breakEvenPoint();
                break;
            case 4:
                cout << endl << endl;
                cout << "\t   CASH RATIO" << endl;
                cout << "\t================" << endl << endl;
                cashRatio();
                break;

            case 5:
                cout << endl << endl;
                cout << "\t   DEBT TO EQUITY RATIO" << endl;
                cout << "\t==========================" << endl << endl;
                debtToEquityRatio();
                break;
            case 6:
                cout << endl << endl;
                cout << "\t   COST OF GOOD SALES" << endl;
                cout << "\t========================" << endl << endl;
                costOfSoldGoods();
                break;
            case 7:
                cout << endl << endl;
                cout << "\t   GROSS PROFIT MARGIN" << endl;
                cout << "\t=========================" << endl << endl;
                grossProfitMargin();
                break;
            case 8:
                cout << endl << endl;
                cout << "\t   NET PROFIT MARGIN" << endl;
                cout << "\t=======================" << endl << endl;
                netProfitMargin();
                break;
            case 9:
                cout << "Exiting the program." << endl;
                break;
            default:      
                cout << "Invalid choice." << endl;
        }

        // Ask the user if they want to try again
        if (choice != 9) {
            cout << endl << endl;
            cout << "Do you want to try again? (y/n): ";
            cin >> tryAgain;
        }

        // Clear the screen before the next iteration
		#ifdef _WIN32
        	system("cls");
		#else
        	system("clear");
		#endif
		
    } while (tryAgain == 'y' || tryAgain == 'Y');

    cout << "Thank you for using the Financial Calculator System!" << endl;

    return 0;
}

void accountingExpandedEquation() {
    while (true) {
        int choice;
        cout << "Enter the account to solve (1 for ASSETS, 2 for LIABILITIES, 3 for REVENUES, 4 for EXPENSES, 5 for OWNER'S EQUITY): ";
        cin >> choice;

        if (choice < 1 || choice > 5) {
            cout << "Invalid choice. Please enter a number between 1 and 5." << endl;
            continue;
        }

        int assets, liabilities, equity, expenses, income;

        switch (choice) {
            case 1:
                cout << "Enter Liabilities: ";
                cin >> liabilities;
                cout << "Enter Initial/Original Investment: ";
                int initialInvestment;
                cin >> initialInvestment;
                cout << "Enter Additional Investment: ";
                int additionalInvestment;
                cin >> additionalInvestment;
                cout << "Enter Withdrawals: ";
                int withdrawals;
                cin >> withdrawals;
                cout << "Enter Revenues: ";
                int revenues;
                cin >> revenues;
                cout << "Enter Expenses: ";
                cin >> expenses;

                assets = liabilities + initialInvestment + additionalInvestment - withdrawals + revenues - expenses;
                cout << "--------------------------" << endl;
                cout << " Assets: " << assets << endl;
                cout << "--------------------------" << endl;
                break;

            case 2:
                cout << "Enter Assets: ";
                cin >> assets;
                cout << "Enter Expenses: ";
                cin >> expenses;
                cout << "Enter Owner's Equity: ";
                cin >> equity;
                cout << "Enter Income: ";
                cin >> income;

                liabilities = assets + expenses - equity - income;
                cout << "--------------------------" << endl;
                cout << " Liabilities: " << liabilities << endl;
                cout << "--------------------------" << endl;
                break;

            case 3:
                cout << "Enter Assets: ";
                cin >> assets;
                cout << "Enter Liabilities: ";
                cin >> liabilities;
                cout << "Enter Owner's Equity: ";
                cin >> equity;
                cout << "Enter Expenses: ";
                cin >> expenses;

                income = assets - liabilities - equity + expenses;
                cout << "--------------------------" << endl;
                cout << " Revenues: " << income << endl;
                cout << "--------------------------" << endl;
                break;

            case 4:
                cout << "Enter Assets: ";
                cin >> assets;
                cout << "Enter Liabilities: ";
                cin >> liabilities;
                cout << "Enter Owner's Equity: ";
                cin >> equity;
                cout << "Enter Revenues: ";
                cin >> income;

                expenses = assets - liabilities - equity - income;
                cout << "------------------------" << endl;
                cout << " Expenses: " << expenses << endl;
                cout << "------------------------" << endl;
                break;

            case 5:
                cout << "Enter Assets: ";
                cin >> assets;
                cout << "Enter Liabilities: ";
                cin >> liabilities;
                cout << "Enter Expenses: ";
                cin >> expenses;
                cout << "Enter Income: ";
                cin >> income;

                equity = assets + expenses - liabilities - income;
                cout << "--------------------------" << endl;
                cout << " OWNER'S EQUITY: " << equity << endl;
                cout << "--------------------------" << endl;
                break;
        }

        char tryAgain;
        cout << "Do you want to try again with the expanded accounting equation? (y/n): ";
        cin >> tryAgain;
        if (tryAgain != 'y') {
            break;
        }
    }
}

// Function to calculate net income
int netIncome() {
    int revenue, expenses, netIncome;

    // Input values with validation
    cout << "Please input the revenue figures: ";
    while (!(cin >> revenue)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a valid number for revenue: ";
    }

    cout << "Kindly provide the expenses incurred: ";
    while (!(cin >> expenses)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a valid number for expenses: ";
    }

    // Calculation
    netIncome = revenue - expenses;
    // Output the result
    cout << "--------------------------" << endl;
    cout << " Net Income: " << netIncome << endl;
    cout << "--------------------------" << endl;

    return netIncome;
}

void breakEvenPoint() {
    int fixedCosts, salesPrice, variableCosts;
    float breakEvenPoint;

    cout << "Enter Fixed Costs: ";
    cin >> fixedCosts;

    cout << "Enter Price Per Unit: ";
    cin >> salesPrice;

    cout << "Eenter Variable Costs Per Unit: ";
    cin >> variableCosts;

    // Avoid division by zero
    if (salesPrice - variableCosts != 0) {
        breakEvenPoint = static_cast<float>(fixedCosts) / (salesPrice - variableCosts);
        cout << "---------------------------------" << endl;
        cout << " Break Even Point in Units: " << breakEvenPoint << endl;
        cout << "---------------------------------" << endl;
    } else {
        cout << "Error: (Sales Price - Variable Costs) is zero. Unable to calculate Break Even Point." << endl;
    }
}

void cashRatio() {
    // Declare variables
    float cashAndCashEquivalents, currentLiabilities, cashRatio;

    // User input
    cout << "Enter Cash and Cash Equivalents: ";
    cin >> cashAndCashEquivalents;

    cout << "Enter Current Liabilities: ";
    cin >> currentLiabilities;

    // Avoid division by zero
    if (currentLiabilities != 0) {
        cashRatio = cashAndCashEquivalents / currentLiabilities;
        cout << "--------------------------" << endl;
        cout << " Cash Ratio: " << cashRatio << endl;
        cout << "--------------------------" << endl;

        cout << "This means that the company can cover " << (cashRatio * 100) << "% of its liabilities due within a year " << "with cash and cash-like items." << endl;
    } else {
        cout << "Error: Current liabilities are zero. Unable to calculate cash ratio." << endl;
    }
}

void debtToEquityRatio() {
    int numLiabilities;
    float debt_to_equity_ratio;

    // Get the number of liabilities
    cout << "Enter the number of individual liabilities: ";
    cin >> numLiabilities;

    // Input individual liabilities
    vector<int> individualLiabilities(numLiabilities, 0);

    cout << "Enter the values for each liability:" << endl;
    for (int i = 0; i < numLiabilities; ++i) {
        cout << "Liability " << i + 1 << ": ";
        cin >> individualLiabilities[i];
    }

    // Calculate the total liabilities
    int totalLiabilities = 0;
    for (int i = 0; i < numLiabilities; ++i) {
        totalLiabilities += individualLiabilities[i];
    }

    // Display individual liabilities
    cout << "\nIndividual Liabilities: ";
    for (int i = 0; i < numLiabilities; ++i) {
        cout << individualLiabilities[i] << " ";
    }

    // Display total liabilities
    cout << "\nTotal Liabilities: " << totalLiabilities << endl;

    int shareholdersEquity;

    // Input total shareholders' equity
    cout << "Enter total shareholders' equity: ";
    cin >> shareholdersEquity;

    // Avoid division by zero
    if (shareholdersEquity != 0) {
        debt_to_equity_ratio = static_cast<float>(totalLiabilities) / shareholdersEquity;
        cout << "--------------------------------" << endl;
        cout << " Debt to Equity Ratio: " << debt_to_equity_ratio << endl;
        cout << "--------------------------------" << endl;
    } else {
        cout << "Error: Shareholders' equity is zero. Unable to calculate Debt to Equity Ratio." << endl;
    }
}

void costOfSoldGoods() {
    int beginningInventory, purchases, endingInventory;
    float cogs;

    cout << "Enter Beginning Inventory: ";
    cin >> beginningInventory;

    cout << "Enter Purchases: ";
    cin >> purchases;

    cout << "Enter Ending Inventory: ";
    cin >> endingInventory;

    cogs = beginningInventory + purchases - endingInventory;

  	cout << "---------------------------------" << endl;
    cout << " Cost of Goods Sold (COGS): " << cogs << endl;
    cout << "---------------------------------" << endl;
}

// New function definitions
void grossProfitMargin() {
    double cost_of_goods, revenue;
    int margin;

    cout << "\nRevenue: ";
    cin >> revenue;
    cout << "Cost of Goods Sold: ";
    cin >> cost_of_goods;

    // Calculate and display gross profit margin
    margin = (revenue - cost_of_goods) / revenue * 100;
    cout << "--------------------------" << endl;
    cout << " Gross Profit Margin: " << margin << "%\n";
    cout << "--------------------------" << endl;
}

void netProfitMargin() {
    double cost_of_goods, revenue, operating_costs, interest, taxes;
    int margin;

    cout << "\nRevenue: ";
    cin >> revenue;
    cout << "Cost of Goods Sold: ";
    cin >> cost_of_goods;
    cout << "Operating costs: ";
    cin >> operating_costs;
  	cout << "Interest: ";
    cin >> interest;
    cout << "Taxes: ";
    cin >> taxes;

    // Calculate and display net profit margin
    margin = (revenue - cost_of_goods - operating_costs - interest - taxes) / revenue * 100;
    cout << "--------------------------" << endl;
    cout << " Net Profit Margin: " << margin << "%\n";
    cout << "--------------------------" << endl;
}
