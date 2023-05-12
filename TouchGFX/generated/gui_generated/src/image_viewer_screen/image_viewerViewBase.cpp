/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/image_viewer_screen/image_viewerViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

image_viewerViewBase::image_viewerViewBase() :
    buttonCallback(this, &image_viewerViewBase::buttonCallbackHandler)
{
    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    image1.setXY(0, 0);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_BACKGROUNDS_480X272_METEOR_RAIN_ID));
    add(image1);

    delete_button.setXY(340, 2);
    delete_button.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_36_SMALL_ROUND_NORMAL_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_36_SMALL_ROUND_PRESSED_ID));
    delete_button.setLabelText(touchgfx::TypedText(T___SINGLEUSE_WHSL));
    delete_button.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    delete_button.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    add(delete_button);

    return_button.setXY(2, 2);
    return_button.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_36_SMALL_ROUND_NORMAL_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_36_SMALL_ROUND_PRESSED_ID));
    return_button.setLabelText(touchgfx::TypedText(T___SINGLEUSE_N34E));
    return_button.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    return_button.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    return_button.setAction(buttonCallback);
    add(return_button);

    image_container.setPosition(58, 49, 365, 209);
    add(image_container);
}

image_viewerViewBase::~image_viewerViewBase()
{

}

void image_viewerViewBase::setupScreen()
{

}

void image_viewerViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &return_button)
    {
        //Interaction1
        //When return_button clicked change screen to home
        //Go to home with no screen transition
        application().gotohomeScreenNoTransition();
    }
}
