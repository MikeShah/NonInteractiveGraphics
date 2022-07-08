// vec3.d
// Compile with:    dmd vec3.d -of=prog
// Run with:        ./prog
import std.stdio;
import std.conv;

class vec3{
    // Constructor
    this(){
        e[0] = 0.0;
        e[1] = 0.0;
        e[2] = 0.0;
    }
    // Constructor initializing the elements
    this(double e0, double e1, double e2){
        e[0] = e0;
        e[1] = e1;
        e[2] = e2; 
    }
    
    double x() const { return e[0]; }
    double y() const { return e[1]; }
    double z() const { return e[2]; }

    // Store x,y,z components.
    private double[3] e;
}

void main(){

    vec3 vector0 = new vec3();
    vec3 vector1 = new vec3(1,2,3);

    writeln("vector0: "~to!string(vector0.x())~","
                       ~to!string(vector0.y())~","
                       ~to!string(vector0.z()));
    writeln("vector1: "~to!string(vector1.x())~","
                       ~to!string(vector1.y())~","
                       ~to!string(vector1.z()));
}


