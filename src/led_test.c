#include "DEV_Config.h"
#include "LCD_Test.h"
#include "LCD_1in83.h"
#include <stdio.h>
#include "pico/stdlib.h"
int led_test_B(void)
{
    
    //DEV_Delay_ms(200);
    if (DEV_Module_Init() != 0)
    {
        return -1;
    }
    /* LCD Init */
    DEV_SET_PWM(100);
    printf("1.83inch LCD demo...\r\n");
    LCD_1IN83_Init(VERTICAL);
    LCD_1IN83_Clear(WHITE);
    
    UDOUBLE Imagesize = LCD_1IN83_HEIGHT * LCD_1IN83_WIDTH * 2;
    UWORD *BlackImage;
    if ((BlackImage = (UWORD *)malloc(Imagesize)) == NULL)
    {
        printf("Failed to apply for black memory...\r\n");
        exit(0);
    }
    // /*1.Create a new image cache named IMAGE_RGB and fill it with white*/
    Paint_NewImage((UBYTE *)BlackImage, LCD_1IN83.WIDTH, LCD_1IN83.HEIGHT, 0, WHITE);
    Paint_SetScale(65);
    Paint_Clear(WHITE);
    LCD_1IN83_Display(BlackImage);
    Paint_SetRotate(ROTATE_0);
    Paint_Clear(WHITE);

    Paint_DrawString_EN(50, 100, "HEJ ULLE", &Font20, 0x000f, 0xfff0);
    // /*3.Refresh the picture in RAM to LCD*/
    LCD_1IN83_Display(BlackImage);
    DEV_Delay_ms(1000);

    /* Module Exit */
    free(BlackImage);
    BlackImage = NULL;

    DEV_Module_Exit();
    return 0;
}
