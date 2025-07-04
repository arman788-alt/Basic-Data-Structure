#include <bits/stdc++.h>
using namespace std;
int main()
{

    int Q;
    cout << "Q";
    cin >> Q;

    while (Q--)
    {

        stack<char> q;

        string s;
        cout << "s :";
        cin >> s;

        for (auto i = s.begin(); i < s.end(); i++)
        {
            if (*i == '1')
            {
                if (!q.empty() && q.top() == '0')
                {
                    q.pop();
                }
                else

                {
                    q.push(*i);
                }
            }

            else if (*i == '0')
            {
                q.push(*i);
            }
        
        }
        if (!q.empty())
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
        
    }

    return 0;
}

testcase:
7


01
10
0011
0101
01001110
000111010011
00011


Sample Output 0

YES
NO
YES
YES
NO
YES
NO

Explanation:  
আপনাকে একটি বাইনারি স্ট্রিং দেওয়া হবে (একটি বাইনারি স্ট্রিং হল একটি স্ট্রিং যা শুধুমাত্র 0 এবং 1 ধারণ করে) যেখানে প্রতি 1 তার পূর্ববর্তী সংলগ্ন 0 এবং নিজেই বাদ দেবে । একটি eliminations করার পরে, যদি আরেকটি eliminations করা সম্ভব হয়, এটি অব্যাহত থাকবে যতক্ষণ না আর কোনো eliminations করা না হয়।
For example, 
1 0 0 1 1 0 1 1 0 -> 1 0 0 1 1 0 1 1 0 (এইখান মার্ক করা 0 1 উভয় ডিলিট হয়ে যাবে কারণ, 1 এর আগে 0 কে পেয়েছে ) -> 1 0 1 0 1 1 0
 1 0 1 0 1 1 0 ->  1 0 1 0 1 1 0 (এইখান মার্ক করা 0 1 উভয় ডিলিট হয়ে যাবে কারণ, 1 এর আগে 0 কে পেয়েছে ) -> 1 0 1 1 0
1 0 1 1 0 -> 1 0 1 1 0 (এইখান মার্ক করা 0 1 উভয় ডিলিট হয়ে যাবে কারণ, 1 এর আগে 0 কে পেয়েছে ) -> 1 1 0
1 1 0 -> এরপর আর 1 এর আগে 0 কে পাওয়া যাচ্ছে নাহ, তাই আর ডিলিট করা সম্ভব হচ্চে নাহ। 
যেহেতু সব গুলো character delete করা সম্ভব হয় নি, তাই এই ইনপুটটির জন্য, আউটপুট দেখাতে হবে “NO”, অন্যথায় আউটপুট “YES” দেখাতে হবে। 
Hints
প্রথমে আপনি টেস্ট কেস ইনপুট নিবেন। তারপর টেস্ট কেস এর জন্য লুপ চালিয়ে দিতে পারেন। প্রতিটি টেস্ট কেসে একটি স্ট্রিং ইনপুট নিবেন। এরপর আপনি একটি stack নিয়ে নিতে পারেন। তারপর স্ট্রিং এর উপর লুপ চালিয়ে দিতে পারেন। লুপের মধ্যে স্ট্রিং এর character পাবেন, সেই character টিক চেক করবেন ‘0’ কিনা , যদি ‘0’ হয় তাহলে character টিকে stack এ পুশ করে দিবেন। আর যদি স্ট্রিং এর character টি ‘1’ হয় তাহলে চেক করবেন stack এর top এর মধ্যে ‘0’ আছে কিনা , যদি থাকে তাহলে stack থেকে সেইটিকে pop করে দিবেন। লুপ শেষে আপনি চেক করে দেখতে পারেন আপনার stack টি খালি কিনা। যদি খালি হয়ে যায় তাহলে আপনি YES প্রিন্ট করবেন আর না হলে NO প্রিন্ট করবেন। 

এক্ষেত্রে খেয়াল রাখতে হবে টেস্ট কেস এর জন্য যেই লুপ চালানো হচ্ছে  stack টি যেনো সেই লুপের ভিতরে ডিক্লেয়ার করা হয়।



