#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char ** argv){
    if(argc != 5){
        cout << "Wrong Inputs" << endl;
    }
    
    cout << "Pls Wait....." << endl;

    int lineCounter = 0, maxLength = -1, k = atoi(argv[4]);
    FILE *file = fopen(argv[2],"r");

    if(!file) {
        cout << "Error Opening File" << endl;
    }
    fclose(file);

    return 0;
}