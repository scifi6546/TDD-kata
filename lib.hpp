#include <string>
#include <cmath>
int int_pow(int a,int b){
    int pow_out = 1;
    for(int i=0;i<b;i++){
        pow_out*=a;
    }
    return pow_out;
}
int calc(std::string input){
    int temp_num=0;
    int index;
    int sum=0;
    for(auto character:input){
        if(character!='\n'){
            sum=character-0x30;
        }
    }
    return sum;
}