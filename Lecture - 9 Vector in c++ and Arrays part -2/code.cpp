#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec ;

    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    cout << vec.size() << endl;
    cout << vec.capacity() << endl;

    // vec.push_back(35);
    // vec.push_back(45);
    // vec.push_back(55);
    // vec.push_back(65);
    // vec.push_back(75);
    // cout <<"after push back: " << vec.size() << endl;

    // vec.pop_back();

    // // cout << vec.front() << endl; //printing front value
    // // cout << vec.back() << endl; //printing back value

    // cout <<vec.at(3) << endl;
   

    return 0;
}