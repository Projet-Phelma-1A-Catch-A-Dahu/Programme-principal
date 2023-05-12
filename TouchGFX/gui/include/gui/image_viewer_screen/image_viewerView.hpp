#ifndef IMAGE_VIEWERVIEW_HPP
#define IMAGE_VIEWERVIEW_HPP

#include <gui_generated/image_viewer_screen/image_viewerViewBase.hpp>
#include <gui/image_viewer_screen/image_viewerPresenter.hpp>

class image_viewerView : public image_viewerViewBase
{
public:
    image_viewerView();
    virtual ~image_viewerView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // IMAGE_VIEWERVIEW_HPP
