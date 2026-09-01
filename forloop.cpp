#include <iostream>
using namespace std;

int main() {

    // for
    // for(int count = 1; count <= 10; count = count + 1) {
    //     cout << "krishna" << endl;
    // }

    // counting from 1 to 5
    // for(int i = 1; i <= 10; i = i + 1) {
    //     cout << i << endl;
    // }

    // counting from 51 to 69
    // for(int i = 51; i < 70; i = i + 1) {
    //     cout << i << endl;
    // }

     for (int i =1;i<=10;i=i+1) {

          cout << i << " ";
          if (i == 5){

            break;        //break loop se bahr nikal deta h blki continue us term ko skip krwa deta h
          }
     }


    return 0;
}