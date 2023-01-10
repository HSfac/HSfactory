#include <iostream>
using namespace std;
//포인터 배열에 관한 문제이다.
//완
void swapArray(int *p, int *q, int size); // p, q는 배열을 가리키고, size는 배열의 크기
void printArray(int *p, int size); // p는 배열을 가리키고, size는 배열의 크기

int main(){
    int a[]={1,2,3,4,5};
    int b[]={9,8,7,6,5};

    cout <<"배열 a = ";
    printArray(a,5);

    cout << endl;

    cout <<"배열 b = ";
    printArray(b,5);
     cout << endl;
    
    swapArray(a,b,5);
    
    cout <<endl;
    cout <<"배열 a = ";
    printArray(a,5);
     cout << endl;
    
    cout <<"배열 b = ";
    printArray(b,5);
     cout << endl;
    

}

void swapArray(int *p, int *q, int size){
    int tmp[size];//도우미 배열 
    for(int i=0 ;i<size;i++){
        tmp[i]=*(p+i);
        *(p+i) = *(q+i);
        *(q+i)=tmp[i];
        

    }
    //바꿔주기 완료

}
void printArray(int *p, int size){//배열출력 함수이다.
      
    for(int j=0 ;j<size;j++){
        cout << *(p+j);
        cout <<" ";
    }

}