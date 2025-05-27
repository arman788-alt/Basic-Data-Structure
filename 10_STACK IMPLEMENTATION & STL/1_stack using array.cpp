#include <bits/stdc++.h>
using namespace std;

//stack use hoy emon situation e jokhon sobar last er value ta age chacchi, er porer value ta er poree chacchi eirokom holee por por... orthat ultaa dik theke por por value dibnee
// chiar, plate opor theke por por newar moto situation holeee
//browser history er por por back e asshaa emon holee

class myStack
{
public:
    vector<int> v; //etay stack er internal data structure, dynamic array diye.
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        if (v.size() == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myStack st; // ekhane direct v vector ke access kora jaynh ...v vector private thake.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    while (st.empty() == false) //shortcut: (!st.empty()) manee stack ekhono empty naa, ar..jotokhon stack empty na hoy totokhon loop cholbe.
    {
        cout << st.top() << endl; //top er value  dekhar por oita pop na korle sob somoy top er value oitaay thakbee, taay por por nicher value dekhar jonno, por por top er value dlt korte hoy.
        st.pop();
    } // ekhane array er moto index / size ojunay access kora jaynh....stack e top/last er value access kora jay sudhuu ei jonnoi ekee stack bole.

    return 0;
}


