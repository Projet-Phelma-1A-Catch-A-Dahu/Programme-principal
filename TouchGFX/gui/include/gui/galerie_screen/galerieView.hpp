#ifndef GALERIEVIEW_HPP
#define GALERIEVIEW_HPP

#include <gui_generated/galerie_screen/galerieViewBase.hpp>
#include <gui/galerie_screen/galeriePresenter.hpp>

class galerieView : public galerieViewBase
{
public:
    galerieView();
    virtual ~galerieView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // GALERIEVIEW_HPP
