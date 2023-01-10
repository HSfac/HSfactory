#include <iostream>
using namespace std;
//완
int isMultiple(int x,int y);
int main(){
    int a,b;
    cout <<"두 정수 입력>>";
    cin >> a >> b;

    
    if(isMultiple(a,b)==true){
        cout << "Yes";
    }
    else if(isMultiple(a,b)==false){
        cout << "No";
    }

       



    return 0;
}

int isMultiple(int x,int y){
    if(y%x==0){
        return true;
    }
    else{
        return false;
    }

}
