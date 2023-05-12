#ifndef IMAGE_VIEWERPRESENTER_HPP
#define IMAGE_VIEWERPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class image_viewerView;

class image_viewerPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    image_viewerPresenter(image_viewerView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~image_viewerPresenter() {};

private:
    image_viewerPresenter();

    image_viewerView& view;
};

#endif // IMAGE_VIEWERPRESENTER_HPP
