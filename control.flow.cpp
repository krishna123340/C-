#include <iostream>
using namespace std;

int main () {

//    int budget ;
//    cout << "Enter your Budget:" << endl;

//    //input 
//    cin >> budget;
    
//    if (budget > 2000000) {
//       cout <<"you can buy Scarpio"<< endl;
//    }
//    else {
//         cout << " you cannot buy scarpio" <<endl;

//    }
//   int marks =55;

//   if(marks > 90) {
//      cout << "A";
//   }

//   else if(marks > 80) {
//      cout << "B";
//   }

//   else if(marks > 70) {
//      cout << "C";
//   }

//  else if(marks > 60) {
//      cout << "D";
//   }

// else {
//     cout << "you failed";
// }

  int height;
  cout<<"Enter your height:" << endl;
  cin >> height;

  int weight;
  cout<<"Enter your weight:" << endl;
  cin >> weight;

  if (height > 5) {

         if(weight > 70){
            cout << "you got a good BMI" << endl;

         }
        else {
            cout << "bhai tujhse na hoyaega"<< endl;
        }

  }
   else {
       cout<< "Complain dila du"<< endl;
   }

return 0;

}
