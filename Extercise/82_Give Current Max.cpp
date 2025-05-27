#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    int roll;
    int marks;

    student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp
{
public:
    bool operator()(student a, student b)
    {
        if (a.marks < b.marks)
            return true;
        else if (a.marks > b.marks)
            return false;

        else
        {
            if (a.roll > b.roll)
                return true;

            else if (a.roll < b.roll)
                return false; 

            else 
            return false;
        }
    }
};

int main()
{
    priority_queue<student, vector<student>, cmp> pq;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        student obj(name, roll, marks);
        pq.push(obj);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int comand;
        cin >> comand;
       
         if (comand == 0)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            student obj(name, roll, marks);
            pq.push(obj);

            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }

        else if (comand == 1)
        {
            if (!pq.empty())
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;

            else
                cout << "Empty" << endl;
        }

        else if (comand == 2)

        {
            if (!pq.empty())
            {
                pq.pop();
                if(!pq.empty())
                {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
                }
                else
                cout << "Empty" << endl;
            }
            else
                cout << "Empty" << endl;
        }
    }

    return 0;
}