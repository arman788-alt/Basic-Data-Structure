#include <bits/stdc++.h>
using namespace std;
int main()
{

    list<string> web;



    string address;
    while (cin >> address && address != "end")
    {
        web.push_back(address);
    }



    int q;
    cin >> q;

    auto temp = web.begin();

    while (q--)
    {
        string comand;
        cin >> comand;

        if (comand == "visit")
        {
            string tar;
            cin >> tar;


            auto it = find(web.begin(), web.end(), tar);

            if (it != web.end())
            {
                temp = it;
                cout << *it << endl;
            }

            else
            {
                cout << "Not Available" << endl;
            }
        }

        else if (comand == "next")
        {

            auto nextt = next(temp);
            if (nextt != web.end())
            {
                temp = nextt;
                cout << *nextt << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }

        else if (comand == "prev")
        {
            auto pr = prev(temp);
            if (pr != web.end())
            {
                temp = pr;
                cout << *pr << endl;
            }

            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}


