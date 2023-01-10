#include <iostream>
using namespace std;
//완료
int main(){
    int a;
    while(true){
        cout << "정수 입력>>";
        cin >> a;
        
        if(a==0){
        exit(0);
        }

        else if(a%3==0){
            cout << "YES\n";

        }

        else if(a%3!=0){
            cout <<"NO\n";
        }

    }
    
    
    return 0;
}