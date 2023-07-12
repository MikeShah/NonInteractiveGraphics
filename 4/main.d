import std.stdio;

void expensive(){
    for(size_t i=0; i < 10000000 ; ++i){
        writeln("Hi: ",i);
    }

}

void main(){

    expensive();
    for(size_t i=0; i < 10000 ; ++i){
        writeln("Hi: ",i);
    }

}
