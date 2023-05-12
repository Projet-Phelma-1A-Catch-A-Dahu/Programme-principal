#ifndef WIFI_SETTINGSPRESENTER_HPP
#define WIFI_SETTINGSPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class wifi_settingsView;

class wifi_settingsPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    wifi_settingsPresenter(wifi_settingsView& v);

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

    virtual ~wifi_settingsPresenter() {};

private:
    wifi_settingsPresenter();

    wifi_settingsView& view;
};

#endif // WIFI_SETTINGSPRESENTER_HPP
