import std.stdio;

void expensive(){
    // Pro tip: Use _ so you can read numbers.
    for(size_t i=0; i < 10_000_000 ; ++i){
        writeln("Hi: ",i);
    }

}

void main(){

    expensive();
    for(size_t i=0; i < 10000 ; ++i){
        writeln("Hi: ",i);
    }

}
