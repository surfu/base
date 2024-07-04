#include <iostream>
using namespace std;

struct Box
{
private:
    int* _height;
    int* _width;
    int* _length;
public:
    Box()
    {
        _height = nullptr;
        _width = nullptr;
        _length = nullptr;
    }
    Box(int height) : Box()
    {
        setHeight(height);
    }
    Box(int height, int width) : Box(height)
    {
        setWidth(width);
    }
    Box(int height, int width, int length) : Box(height, width)
    {
        setLength(length);
    }

    ~Box()
    {
        cout << "Box destroyed" << endl;
        deallocateHeight();
        deallocateWidth();
        deallocateLength();
    }

    //Deallocate

    void deallocateWidth()
    {
        if (_width != nullptr)
        {
            delete _width;
            _width = nullptr;
        }
    }

    void deallocateHeight(){

        if (_height != nullptr)
        {
            delete _height;
            _height = nullptr;
        }
    }

    void deallocateLength() {

        if (_length != nullptr)
        {
            delete _length;
            _length = nullptr;
        }
    }

    //Getters
    int getHeight() { return (_height == nullptr)? 0 : *_height; }
    int getWidth() { return  (_width == nullptr) ? 0 : *_width;}
    int getLength() { return (_length == nullptr) ? 0 : *_length; }

    //Setters
    void setHeight(int height) {
        deallocateHeight();
        _height = new int{ (height > 0) ? height : 0 };
    }

    void setWidth(int width) { 
        deallocateWidth();
        _width = new int{ (width > 0) ? width : 0 };
    }
    void setLength(int length) { 
        deallocateLength();
        _length = new int{ (length > 0) ? length : 0 };
    }
};

int main()
{
   
    Box * box = new Box(10, 20, 30); // call constructor with 3 parameters

    cout << "Height: " << box->getHeight() << endl;
    cout << "Width: " << box->getWidth() << endl;
    cout << "Length: " << box->getLength() << endl;

    delete box; // call destructor
    cout<< "End of program" << endl;

    
    return 0;
}