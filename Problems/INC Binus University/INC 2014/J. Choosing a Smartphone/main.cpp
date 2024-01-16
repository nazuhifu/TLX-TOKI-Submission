#include<iostream>
using namespace std;

int main(){
    int cases, appSum, space, max;
  
    cin >> cases;

    for(int i = 1; i <= cases; i++){
        max = 0;
        cin >> appSum;

        while(appSum--){
            cin >> space;
            max += space;
        }

        if(max <= 16000){
            cout << "Case #" << i << ": 16GB\n";
        } else if(max <= 32000){
            cout << "Case #" << i << ": 32GB\n";
        } else if(max <= 64000){
            cout << "Case #" << i << ": 64GB\n";
        } else if(max <= 128000){
            cout << "Case #" << i << ": 128GB\n";
        }
    }
    return 0;
}
