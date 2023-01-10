#include <iostream>
using namespace std;
//완료
int main(){
    int a,b,k;
    cout << "두 정수 입력>>";
    cin >> a >> b ; // a가 첫번째 정수,b가 두번째 정수이다.나눠질수 있으면 배수자나!
    
     
    
    if (b%a==0){
        cout << "YES";
    }
    else{
        cout <<"NO";
    }
}