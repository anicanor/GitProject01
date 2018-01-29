//main.cpp
//Nicanor, Aaron
//anicnaor
#include<iostream>

using namespace std;


//declares array
const int MAX = 100;
int starArray[MAX];

//Fills out the Array and returns its size
int fill();
//Returns the biggest value in the Array
int largest(int);
//Prints out the Array
void print(int, int);

int main(){

    int size = fill();
    int biggest = largest(size);
    print(biggest, size);




    return 0;

}

int fill(){

    //Fills out the Array
    
    int input, size = 0;
    
    do{
        
        cin >> input;
        
        if (input >= 0){
            
            starArray[size] = input;

        }
        size++;
    
    } while (input != 0);

    return size;

}

int largest(int size){

    //Gets biggest number in Array
    int biggest = 0;
    
    for(int i = 0; i <= size; i++){
        
        if(biggest < starArray[i]){
            
            biggest = starArray[i];
        
        }

    }
    
    return biggest;

}

void print(int biggest, int size){

    //Prints out the Array
    for(int i = biggest; i >= 1; i--){
        
        for(int o = 0; o <= size; o++){
            
            if (i <= starArray[o]){
                
                cout<<"*";

            }else{
                
                cout<<" ";
            
            }

        }

        cout<<endl;
    
    }

}
