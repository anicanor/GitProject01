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
    
    int input, size = 0;
    
    //Keeps getting the user's input and puts it into the array until they type zero
    do{
        
        cin >> input;
        
        //Ignores any negative numbers
        if (input >= 0){
            
            starArray[size] = input;

        }
        size++;
    
    } while (input != 0);

    return size;

}

int largest(int size){

    int biggest = 0;
    
    //Searches through the entire array updating the biggest number
    for(int i = 0; i <= size; i++){
        
        if(biggest < starArray[i]){
            
            biggest = starArray[i];
        
        }

    }
    
    return biggest;

}

void print(int biggest, int size){
    
    //Works its way down when placing the stars and spaces. "The columns"
    for(int i = biggest; i >= 1; i--){
        
        //Sets up the rows
        for(int o = 0; o < size; o++){
            
            //Determines which spot needs a star and which needs a space
            if (i <= starArray[o]){
                
                cout<<"*";

            }else{
                
                cout<<" ";
            
            }

        }

        cout<<endl;
    
    }

}
