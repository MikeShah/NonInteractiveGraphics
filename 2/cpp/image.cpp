// @file image.cpp
// Example structure of an image

class Image{
    public:
    // Constructors
    // ...
    // Destructors
    // ....
    private:
        uint32_t width;
        uint32_t height;
        // Pixel information stored in a
        // random access data structure
        // (e.g. array, std::vector, etc.)
        RGB* pixels;// The structure needs to hold
                    // all of the pixels for the width
                    // and the height of the image, and
                    // that is multipled by the channels.
                    //
                    // If RGB< then channels = 3
                    // pixels = new RGB[width*height*channels]
};


