#include <iostream>
using namespace std;

int main(){    
    const char *rainbowColors[] = {
        "\033[31m", 
        "\033[33m", 
        "\033[32m", 
        "\033[36m", 
        "\033[34m", 
        "\033[35m", 
    };

    int numOfColors = sizeof(rainbowColors) / sizeof(rainbowColors[0]);

    while(1){
        for(int i = 0; i < numOfColors; i++){
            cout << rainbowColors[i] << "hewwo, world." << "\033[0m" << endl;
        };
    };

}
