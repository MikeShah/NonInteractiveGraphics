#include <iostream>

void expensive(){
    for(size_t i=0; i < 1000000; ++i){
        std::cout << "Hi: " << i << std::endl;
    }

}

int main(){

    expensive();

    return 0;
}
