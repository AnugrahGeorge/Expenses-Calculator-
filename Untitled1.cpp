#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> food;
    vector<int> Travel;
    vector<int> Enter;
    vector<int> Book;
    vector<string> foodreason, travelreason, enterreason, bookreason;
    for (int i = 0; i < 7; i++)
    {
        int a, b, c, d;
        string s1, s2, s3, s4;
        cout << " DAY " << i + 1 << endl;
        cout << "Enter Amount spend in food for and shop were you spent money :" << endl;
        cin >> a;
        cin >> s1;
        food.push_back(a);
        foodreason.push_back(s1);
        cout << "Enter Amount spend in Travel for and destination were you spent money :" << endl;
        cin >> b;
        cin >> s2;
        Travel.push_back(b);
        travelreason.push_back(s2);
        cout << "Enter Amount spend in Entertainment for and venue were you spent money :" << endl;
        cin >> c;
        cin >> s3;
        Enter.push_back(c);
        enterreason.push_back(s3);
        cout << "Enter Amount spend in Books for and Book in which you spent money :" << endl;
        cin >> d;
        cin >> s4;
        Book.push_back(d);
        bookreason.push_back(s4);
        cout << endl;
    }
    cout << endl;

    cout << "   FOOD" << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << "DAY " << i + 1 << " : Rs " << food[i] << " @ " << foodreason[i] << endl;
    }
    cout << endl;
    cout << "   TRAVEL" << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << "DAY " << i + 1 << " : Rs " << Travel[i] << " @ " << travelreason[i] << endl;
    }
    cout << endl;
    cout << "   ENTERMAINMENT" << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << "DAY " << i + 1 << " : Rs " << Enter[i] << " @ " << enterreason[i] << endl;
    }
    cout << endl;
    cout << "   BOOKS" << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << "DAY " << i + 1 << " : Rs " << Book[i] << " @ " << bookreason[i] << endl;
    }
    cout << endl;
    float sumfood = accumulate(food.begin(), food.end(), 0);
    float sumTravel = accumulate(Travel.begin(), Travel.end(), 0);
    float sumenter = accumulate(Enter.begin(), Enter.end(), 0);
    float sumBooks = accumulate(Book.begin(), Book.end(), 0);

    cout << "Weekly spent on FOOD : " << sumfood << endl;
    cout << "Weekly spent on Travel : " << sumTravel << endl;
    cout << "Weekly spent on Entertainment : " << sumenter << endl;
    cout << "Weekly spent on Books : " << sumBooks << endl;

    cout << endl
         << "Weekly Average Spend = " << (sumfood + sumTravel + sumenter + sumBooks) / 7 << endl;
}