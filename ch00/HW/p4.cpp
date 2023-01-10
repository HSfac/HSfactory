#include <iostream>
using namespace std;
//완
int main(){
    double list[5];
    double avg,b,sum=0;

    cout << "실수 5개 입력>>";
    for(int j=0;j<5;j++){
        cin >> b;
        list[j] = b;
    }

    for(int i=0;i<5;i++){
        sum = sum + list[i];
        
    }

    avg = sum / (double)5;

    cout << avg;

    return 0;
}