#include <gui/home_screen/homeView.hpp>
#include <touchgfx/utils.hpp>
#include <touchgfx/Unicode.hpp>
#include <String.h>
#include <texts/TextKeysAndLanguages.hpp>



homeView::homeView()
{

}

void homeView::setupScreen()
{
    homeViewBase::setupScreen();
}

void homeView::tearDownScreen()
{
    homeViewBase::tearDownScreen();
}

void homeView::function1_test(){

	touchgfx_printf("buttonUpClicked\n");

	wifistate_button.setLabelText(touchgfx::TypedText(T_RESOURCEID1));
	wifistate_button.invalidate();

}

