#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;


//Bubble Sort Algorithm
void bubble_sort(vector<int> & arr) {

    int current_value, temp, j;
    int length = arr.size();

    for (int i = 0; i < length; i++) {
        j = 0;

        while (j < length - 1) {
            if (arr[j] > arr[j+1]) {         
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;          
            }            
            j++;
        }
    } 
}


//Main Function
int main() {
    vector<int> unsorted_list;
    string user_input, item;
    int length;

    cout << "Enter array values space separated" << endl;

    stringstream x;
    getline(cin, user_input);
    x << user_input;

    while (getline(x, item, ' ')) {
        unsorted_list.push_back(stoi(item));
    }

    length = unsorted_list.size();

    bubble_sort(unsorted_list);

    for (int i = 0; i < length; i++) {
        cout << unsorted_list[i] << " ";
    }

    cin;
    return 0;
}