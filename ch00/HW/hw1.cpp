#include <iostream>
using namespace std;
//완료
int main(){
    int i,a,b,sum=0;
    cout <<"두개의 정수 입력>>";
    cin >> a >> b;

    if(a<=b){
        for(i=a;i<=b;i++){ 
        sum += i;
        }
        cout << a << "에서 " << b <<"까지 합은"<<sum;

    

    }

    else{
        cout << "ERROR";
        exit(0);

    }

    



    return 0;

}