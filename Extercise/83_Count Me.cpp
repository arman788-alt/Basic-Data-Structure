#include<bits/stdc++.h>
using namespace std;
int main()
{
 
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string sentence;
        getline(cin, sentence);

        string word;
        stringstream ss(sentence);

        map<string, int> mp;
        int count = 0;
        string max_Word;
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > count)
            {
                count = mp[word];
                max_Word = word;
            }
        }

        cout << max_Word << " " << count << endl;
    }






    
    return 0;
}