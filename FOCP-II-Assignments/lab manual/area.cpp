// #include <iostream>
// using namespace std;

// int area(int x,int y){
//     return x*y;
// }

// int main() {
//     int length,width;
//     cout<<"Enter Length:";
//     cin>> length;

//     cout<<"Enter Width:";
//     cin>> width;

//     int result = area(length,width);
//     cout<<"The area of square is: " << result << "\n";
//     return 0;

// }

#include <iostream>
using namespace std;

void swap(int &x,int &y) {
    cout <<"X and Y before swap:"<<x<< ", "<<y << endl;
    int temp=x;
    x=y;
    y=temp;
    cout <<"X and Y after swap:"<<x << ", " <<y << endl;

}

int main() {
    int num1,num2;

    cout <<"Provide numbers:"<<endl;
    cin>>num1>>num2;
    cout <<"Values of num1 and num2 before function call:"<< num1 << ", " << num2 << endl;
    swap(num1,num2);
    cout <<"Values of num1 and num2 before function call"<< num1 << ", " << num2 << endl;
    return 0;
}
