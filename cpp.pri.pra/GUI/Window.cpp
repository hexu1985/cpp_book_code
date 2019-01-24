
//
// This is a GUI support code to the chapters 12-16 of the book
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

#include "Window.h"
#include "Graph.h"
#include "GUI.h"

//------------------------------------------------------------------------------

namespace Graph_lib {

Window_::Window_(int ww, int hh, const string& title)
    :Fl_Window(ww,hh,title.c_str()),w(ww),h(hh)
{
    init();
}

//------------------------------------------------------------------------------

Window_::Window_(Point xy, int ww, int hh, const string& title)
    :Fl_Window(xy.x,xy.y,ww,hh,title.c_str()),w(ww),h(hh)
{ 
    init();
}

//------------------------------------------------------------------------------

void Window_::init()
{
    resizable(this);
    show();
}

//------------------------------------------------------------------------------

void Window_::draw()
{
    Fl_Window::draw();
    for (unsigned int i=0; i<shapes.size(); ++i) shapes[i]->draw();
}

//------------------------------------------------------------------------------

void Window_::attach(Widget& w)
{
    begin();         // FTLK: begin attaching new Fl_Wigets to this window
    w.attach(*this); // let the Widget create its Fl_Wigits
    end();           // FTLK: stop attaching new Fl_Wigets to this window
}

//------------------------------------------------------------------------------

void Window_::detach(Widget& b)
{
    b.hide();
}

//------------------------------------------------------------------------------

void Window_::detach(Shape& s)
    // guess that the last attached will be first released
{
    for (unsigned int i = shapes.size(); 0<i; --i)    
        if (shapes[i-1]==&s)
            shapes.erase(shapes.begin()+(i-1));
}

//------------------------------------------------------------------------------

void Window_::put_on_top(Shape& p) {
    for (int i=0; i<shapes.size(); ++i) {
        if (&p==shapes[i]) {
            for (++i; i<shapes.size(); ++i)
                shapes[i-1] = shapes[i];
            shapes[shapes.size()-1] = &p;
            return;
        }
    }
}

//------------------------------------------------------------------------------

int gui_main()
{
    return Fl::run();
}

//------------------------------------------------------------------------------

}; // of namespace Graph_lib
