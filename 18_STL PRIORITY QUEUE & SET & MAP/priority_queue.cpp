#include <bits/stdc++.h>
using namespace std;
//HEAP er STL priority Queue,
//HEAP SORT
int main()
{   //priority_queue<int> pq; //Max heap follow kore ;boro theke choto sort hobe array te
    
    priority_queue<int, vector<int>, greater<int>> pq;// Min heap follow kore; choto theke boro sort hobe array te
    while (true)
    {
        int c;
        cin >> c;
        if (c == 0)
        {
            int x;
            cin >> x;
            pq.push(x); // O(logN) // protiber value insert korlei sathe sathe sorted hobe array list.
        }
        else if (c == 1)
        {
            pq.pop(); // O(logN)  // delete kore max heap hole er max value, min heap hole  min er value
        }
        else if (c == 2)
        {
            cout << pq.top() << endl; // O(1)  //Complete binary tree visualize korle Max or Min Heap er value thake sobar opore , ei jonno top  diye  value dekhboo
                                      //Max heap or Min onujay boro or choto value show korbe.
        }
        else
        {
            break;
        }
    }
    return 0;
}

//priority queue:: ekoi sathe line maintain kore orthat je age ashbe she serial e agee thakbee and piority o maintain koree orthat...vip, vvip thakle tara priority onujay sobar age ashbee lin er serial e.
//ei priority queue internally hocche HEAP , heap hocche array er ekta technique jeta priority queue diye kora hoy

//piority queue: heap er araay er line e choto theke boro or boro theke choto sorted akare maintain kore priority queue..
//jodi boli linee e boro value age thakbe tahole priority queue boro value gulake priority onujay line er sobar age rakhbe..
// r jodi boli choto theke boro tahole choto value ke linne e age priority dibee. evabe maintain kore chole priority queue.

//array te 1ta value insert kora or delete korle complexity hobe .....log(N)