#include <iostream>
using namespace std;

void targ_fun(int num[], int size, int target);

int main(){
    int num[5] = {5,6,2,9,1}, size = 5, target;
    cout << "What is your target number: ";
    cin >> target;
    targ_fun (num, size, target);
    return 0;
}
void targ_fun(int num[] , int size, int target){
for (int i = 0 ; i < size ; i++){
    for (int j = 0 ; j < size ; j++){
        int x = num[i] + num[j];
        if ( x == target){
            cout << "The indices are: "<< i <<"\t&\t"<< j<<endl;
            return;
        }
    }
}
cout << "No two elemnts add up to give the your target!!\n";
}