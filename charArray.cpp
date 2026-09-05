#include <iostream>
using namespace std;

int getlength(char arr[]) {
       int count =0;
       int index =0;
       while(arr[index] != '\0') {
            count ++;
            index ++;
       }
       return count;
}

void concetArray(char a[] , char b[]) {
     int aIndex = getlength(a);
     int bIndex =0;

     while(b[bIndex] != '\0') {
         ///start coping
         a[aIndex] = b[bIndex];
         aIndex++;
         bIndex++;
        
     }
        //end a string with null character
        a[aIndex] = '\0';
       
}

void copyArrary(char actualArr[],char copyArr[]) {
      int aIndex = 0;
      int bIndex =0;

      while(actualArr[aIndex] != '\0') {
         //start coping
         copyArr[bIndex] = actualArr[aIndex];
         aIndex++;
         bIndex++;
      }
       copyArr[bIndex] = '\0';
}


bool compareArray(char a[], char b[]) {
       int aIndex = 0;
      int bIndex =0;
      int alength = getlength(a);
      while(aIndex <= alength) {
            if(a[aIndex] != b[bIndex]) {
             return false;

            }
            else{
                 aIndex++;
                 bIndex++;
      
            }

      }
    //agar yha tk aagye ho, iska mtlb saare
    //character match ho gye he
    return true;


}

int main () {

    char arr[] = "krishna";
    char brr[] =  "Singh";

    cout << compareArray(arr,brr) <<endl;

    // char actual[100] = "krishna";
    // char ans[100];

    // copyArrary(actual ,ans);
    // cout <<"printing ans array:"<< ans<<endl;


    //  char a[50] = "love";
    //  char b[50] = "krishna";
    //  concetArray(a,b);

    //  cout << "printing a: " << a<< endl;

    //    char arr[] = "krishna";
    //    cout << getlenght(arr)<<endl;

    //declare
    // char arr[10];

    // cout << arr[3]<< endl; //garbage value 

    // char arr[10] = "babbar";
    // cout << arr[1] << endl;

    // cout << "printing 6th index:" << arr[6] << endl;
    // int asciiValue = arr[6];
    // cout <<asciiValue << endl;

    // char arr[4];
    // arr[0]= 'a';
    // arr[1]=  'b';
    // arr[2]= '\0';

    // int arr[4]= {1,2,3,4};
    // cout << arr << endl;

    // char brr[8]= "krishna" ;
    // cout << brr <<endl;
     
    // //gaping
    // for(int i=0; i<5;i++){
    //     cout << brr[i] << " ";
    // }


    return 0;
}