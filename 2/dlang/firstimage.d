// firstimage.d
// Compile with:    dmd firstimage.d -of=prog
// Run with:        ./prog > image.ppm
import std.stdio;
import std.conv;

void main(){

    // Some constant values for the image dimensions
    const uint width     = 256;
    const uint height    = 256;
    const uint maxValue  = 255;
    
    // Write out the header P3 header
    writeln("P3");
    writeln(to!string(width)~" "~to!string(height));
    writeln(to!string(maxValue));
    
    // Write out the pixel data
    for(int x=0; x < width; ++x){
        for(int y=0; y < height; ++y){
            // Determine the pixel color
            uint component = to!uint(255.0f * (to!float(y)/255.0f));
            // Write out one pixel of information
            writeln(to!string(component)~" "
                    ~to!string(component)~" "
                    ~to!string(component));
        }
        writeln();
    }

}


