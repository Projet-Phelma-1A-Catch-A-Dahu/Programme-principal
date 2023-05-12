#ifndef WIFI_SETTINGSVIEW_HPP
#define WIFI_SETTINGSVIEW_HPP

#include <gui_generated/wifi_settings_screen/wifi_settingsViewBase.hpp>
#include <gui/wifi_settings_screen/wifi_settingsPresenter.hpp>

class wifi_settingsView : public wifi_settingsViewBase
{
public:
    wifi_settingsView();
    virtual ~wifi_settingsView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // WIFI_SETTINGSVIEW_HPP
