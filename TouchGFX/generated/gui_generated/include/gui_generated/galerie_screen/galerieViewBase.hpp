/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef GALERIEVIEWBASE_HPP
#define GALERIEVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/galerie_screen/galeriePresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/containers/ScrollableContainer.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/TextArea.hpp>

class galerieViewBase : public touchgfx::View<galeriePresenter>
{
public:
    galerieViewBase();
    virtual ~galerieViewBase();
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Image image1;
    touchgfx::ScrollableContainer scrollableContainer1;
    touchgfx::ButtonWithLabel return_button;
    touchgfx::Container container1;
    touchgfx::Image image2;
    touchgfx::TextArea text_nbimage;
    touchgfx::TextArea text_nbimage_1;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<galerieViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // GALERIEVIEWBASE_HPP
