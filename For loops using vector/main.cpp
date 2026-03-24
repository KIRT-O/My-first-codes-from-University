#include <iostream>
#include <vector> //our new library

using namespace std;

int main() {

    vector<int> nums = {1, 2, 3, 10, 6, 8, 9}; //we use "vector" to make the array increase itself after adding more numbers


    nums.push_back(90); //to add more numbers with "vector" we use ".push_back"


    for (int i = 0; i < nums.size(); i++) { //the ".size()" is smart because it knows the numbers in the array
        cout << "Index " << i << " : " << nums[i] << endl;
    }

    return 0;
}
