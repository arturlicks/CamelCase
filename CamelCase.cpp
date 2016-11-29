#include <string>
#include <iostream>
using namespace std;


int main(){
    //as the first word is in lowercase count is initialized with one
    int count = 1; 
    string s;
    cin >> s;
    
    for (int i = 0; i < s.size();i++)
        {
        //every new uppercase letter is a new word
        if (isupper(s[i]))
            count++; 
    }
    
    cout << count;
    return 0;
}
