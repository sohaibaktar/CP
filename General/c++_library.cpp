#include <bits/stdc++.h>
using namespace std;

#define ll long long
// Coded by Sohaib Aktar

// Pairs
void explain_pair()
{
    pair<int, int> p = {1, 3};

    cout << p.first << " " << p.second; // 1 3

    // pair into pair
    pair<int, pair<int, int>> p1 = {1, {4, 3}};
    // prints 1 3 4
    cout << p1.first << " " << p1.second.second << " " << p1.second.first; // 1 3

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    // prints 4 2
    cout << arr[1].second;
    cout << arr[0].second;
}

// vector

void explained_Vector()
{
    vector<int> v; //{}

    v.push_back(1);    //{1}
    v.emplace_back(2); //{1,2}

    vector<pair<int, int>> vec;

    vec.push_back({1, 2});  //{1,2}
    vec.emplace_back(3, 4); //{1,2,3,4}

    //Swap to vector
    //v={1,2}
    //vec = {1,2,3,4}
    v1.swap(vec) // //v={1,2,3,4}    //vec = {1,2}

    // vector of size 5 with ecery element 10
    vector<int> v1(5, 10); // {10,10,10,10,10}
    vector<int> v2();      // without initialization it will be 0
    vector<int> v3(5, 20); // 5 element and all value is 20  {20,20,20,20,20}
    vector<int> v4(v1);    // {10,10,10,10,10}
    /*-----------------------------------------------------------------------------------------------------------*/
    //insert
    v1.insert(v1.begin(),5); //{5,10,10,10,10}
    v1.insert(v1.begin()+2,50); //{5,10,50,10,10,10}
    v1.insert(v1.begin()+3,2,500); //{5,10,50,500,500,10,10,10}

    //Delete
    v1.pop_back() //{5,10,50,500,500,10,10}
    v1.pop_back() //{5,10,50,500,500,10}

    //Size
    cout << v1.size() //6

    //erase
    //now in v1 {5,10,50,500,500,10}
    v1.erase(v1.begin()); //{10,50,500,500,10}
    v1.erase(v1.begin()+2); //{10,50,500,10}
    
    
}
void user_vector()
{ // vector input from use in for loop
    // initialize vector
    vector<int> v5;

    // Input vector
    cout << "enter value:";
    for (int i = 1; i <= 5; i++)
    {
        int element;
        cin >> element;
        v5.push_back(element);
    }

    // Print vector
    //print vector all element using iterator...
    cout << "Output of vector begin to end: ";
    for (vector<int> :: iterator  i = v5.begin(); i != v5.end(); ++i)
        cout << *i << " ";
    cout << endl;

    // using begin and iterator to print vector element
    cout << "Output of vector begin to end: ";
    for (auto i = v5.begin(); i != v5.end(); ++i)
        cout << *i << " ";
    cout << endl;
    // another way to print all vector element.
    cout << "2nd way Output of vector begin to end: ";
    for (auto it : v5)
        cout << it << " ";

    // vector<int> :: iterator it = v5.begin(); //take the vector to be {10,20,30,40,50}
    //     it++;
    //     cout <<*(it) <<endl;        //prints value of 2nd position
}

int main()
{

    // explain_pair();
    user_vector();
}