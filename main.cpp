#include <iostream>

using namespace std;

int main() {

    char input, firstl = 'A';
    cout<<"Please enter an alphabet in Capital to be at end of the pyramid :"<<endl;
    cin>> input;
    for (int i=1; i <= (input- 'A' + 1); i++){
        for (int j = 1; j<= i; j++){
            cout<< firstl<< "";
        }
        firstl++;
        cout<<endl;
    }
    return 0;
}
