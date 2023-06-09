/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/home_screen/homeViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

homeViewBase::homeViewBase() :
    buttonCallback(this, &homeViewBase::buttonCallbackHandler)
{
    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    background_img.setXY(0, 0);
    background_img.setBitmap(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_BACKGROUNDS_480X272_METEOR_RAIN_ID));
    add(background_img);

    wifistate_button.setXY(120, 37);
    wifistate_button.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_MEDIUM_ROUNDED_NORMAL_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_MEDIUM_ROUNDED_PRESSED_ID));
    wifistate_button.setLabelText(touchgfx::TypedText(T___SINGLEUSE_ZXNM));
    wifistate_button.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    wifistate_button.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    add(wifistate_button);

    galerie_button.setXY(120, 111);
    galerie_button.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_MEDIUM_ROUNDED_NORMAL_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_MEDIUM_ROUNDED_PRESSED_ID));
    galerie_button.setLabelText(touchgfx::TypedText(T___SINGLEUSE_4DYT));
    galerie_button.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    galerie_button.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    galerie_button.setAction(buttonCallback);
    add(galerie_button);

    help_button.setXY(120, 182);
    help_button.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_MEDIUM_ROUNDED_NORMAL_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_MEDIUM_ROUNDED_PRESSED_ID));
    help_button.setLabelText(touchgfx::TypedText(T___SINGLEUSE_N91T));
    help_button.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    help_button.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    help_button.setAction(buttonCallback);
    add(help_button);

    textArea1.setXY(0, 0);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_GHTS));
    add(textArea1);
}

homeViewBase::~homeViewBase()
{

}

void homeViewBase::setupScreen()
{

}

void homeViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &galerie_button)
    {
        //Interaction1
        //When galerie_button clicked change screen to galerie
        //Go to galerie with no screen transition
        application().gotogalerieScreenNoTransition();
    }
    if (&src == &help_button)
    {
        //Interaction2
        //When help_button clicked call virtual function
        //Call function1_test
        function1_test();
    }
}
