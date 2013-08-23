GOExtendedUIColor
=================

Extended functionalities of UIColor

Apple has wonderfully implemented all the necessary functionalities in its SDK. Even though as a developer we can ever find some more shortcuts and some extra functionality for our day-to-day programming life.

The UIColor category “UIColor+GOExtension.h” is one of the extensions (written by me) which can save hours of programming and give a way to think in a new direction.

which are...

1. Creating a UIColor object from RGB color values (0 - 255) instead of percentage.

    ```Objective-C
    + (UIColor *)RGBColorWithRed:(NSUInteger)red green:(NSUInteger)green blue:(NSUInteger)blue alpha:(CGFloat)alpha;
    + (UIColor *)RGBColorWithRed:(NSUInteger)red green:(NSUInteger)green blue:(NSUInteger)blue;
    ```
2. UIColor object from hex color string. E.g.  @"#F0F8FF" or @"F0F8FF"

    ```Objective-C
    + (UIColor *)colorWithHexString:(NSString *)hexColorString alpha:(CGFloat)alpha;
    + (UIColor *)colorWithHexString:(NSString *)hexColorString;
    ```
3. Getting RGB values and alpha from UIColor.

    ```Objective-C
    - (CGFloat)redValue;
    - (NSUInteger)RGBRedValue;
    
    - (CGFloat)greenValue;
    - (NSUInteger)RGBGreenValue;
    
    - (CGFloat)blueValue;
    - (NSUInteger)RGBBlueValue;
    
    - (CGFloat)alphaValue;
    ```
4. Finally, creating UIColor from color name, 127 colors, which are defined in [X11](http://en.wikipedia.org/wiki/X11_color_names) and [W3C](http://www.w3.org/TR/SVG/types.html#ColorKeywords).

    ```Objective-C
    //  A

    + (UIColor *)aliceBlueColor;
    + (UIColor *)antiqueWhiteColor;
    + (UIColor *)aquaColor;
    + (UIColor *)aquamarineColor;
    + (UIColor *)azureColor;
  
    //  B
    
    + (UIColor *)beigeColor;
    + (UIColor *)bisqueColor;
    //+ (UIColor *)blackColor;
    + (UIColor *)blanchedAlmondColor;
    //+ (UIColor *)blueColor;
    + (UIColor *)blueVioletColor;
    //+ (UIColor *)brownColor;
    + (UIColor *)burlyWoodColor;
    
    //  C
    
    + (UIColor *)cadetBlueColor;
    + (UIColor *)chartreuseColor;
    + (UIColor *)chocolateColor;
    + (UIColor *)coralColor;
    + (UIColor *)cornflowerBlueColor;
    + (UIColor *)cornsilkColor;
    + (UIColor *)crimsonColor;
    //+ (UIColor *)cyanColor;
    
    //  D
    
    + (UIColor *)darkBlueColor;
    + (UIColor *)darkCyanColor;
    + (UIColor *)darkGoldenRodColor;
    //+ (UIColor *)darkGrayColor;
    + (UIColor *)darkGreenColor;
    + (UIColor *)darkKhakiColor;
    + (UIColor *)darkMagentaColor;
    + (UIColor *)darkOliveGreenColor;
    + (UIColor *)darkOrangeColor;
    + (UIColor *)darkOrchidColor;
    + (UIColor *)darkRedColor;
    + (UIColor *)darkSalmonColor;
    + (UIColor *)darkSeaGreenColor;
    + (UIColor *)darkSlateBlueColor;
    + (UIColor *)darkSlateGrayColor;
    + (UIColor *)darkTurquoiseColor;
    + (UIColor *)darkVioletColor;
    + (UIColor *)deepPinkColor;
    + (UIColor *)deepSkyBlueColor;
    + (UIColor *)dimGrayColor;
    + (UIColor *)dodgerBlueColor;
    
    //  F
    
    + (UIColor *)fireBrickColor;
    + (UIColor *)floralWhiteColor;
    + (UIColor *)forestGreenColor;
    + (UIColor *)fuchsiaColor;
    
    //  G
    
    + (UIColor *)gainsboroColor;
    + (UIColor *)ghostWhiteColor;
    + (UIColor *)goldColor;
    + (UIColor *)goldenRodColor;
    //+ (UIColor *)grayColor;
    + (UIColor *)greenGOColor;
    + (UIColor *)greenYellowColor;
    
    //  H
    
    + (UIColor *)honeyDewColor;
    + (UIColor *)hotPinkColor;
    
    //  I
    
    + (UIColor *)indianRedColor;
    + (UIColor *)indigoColor;
    + (UIColor *)ivoryColor;
    
    //  K
    
    + (UIColor *)khakiColor;
    
    //  L
    
    + (UIColor *)lavenderColor;
    + (UIColor *)lavenderBlushColor;
    + (UIColor *)lawnGreenColor;
    + (UIColor *)lemonChiffonColor;
    + (UIColor *)lightBlueColor;
    + (UIColor *)lightCoralColor;
    + (UIColor *)lightCyanColor;
    + (UIColor *)lightGoldenRodYellowColor;
    //+ (UIColor *)lightGrayColor;
    + (UIColor *)lightGreenColor;
    + (UIColor *)lightPinkColor;
    + (UIColor *)lightSalmonColor;
    + (UIColor *)lightSeaGreenColor;
    + (UIColor *)lightSkyBlueColor;
    + (UIColor *)lightSlateGrayColor;
    + (UIColor *)lightSteelBlueColor;
    + (UIColor *)lightYellowColor;
    + (UIColor *)limeColor;
    + (UIColor *)limeGreenColor;
    + (UIColor *)linenColor;
    
    //  M
    
    //+ (UIColor *)magentaColor;
    + (UIColor *)maroonColor;
    + (UIColor *)mediumAquaMarineColor;
    + (UIColor *)mediumBlueColor;
    + (UIColor *)mediumOrchidColor;
    + (UIColor *)mediumPurpleColor;
    + (UIColor *)mediumSeaGreenColor;
    + (UIColor *)mediumSlateBlueColor;
    + (UIColor *)mediumSpringGreenColor;
    + (UIColor *)mediumTurquoiseColor;
    + (UIColor *)mediumVioletRedColor;
    + (UIColor *)midnightBlueColor;
    + (UIColor *)mintCreamColor;
    + (UIColor *)mistyRoseColor;
    + (UIColor *)moccasinColor;
    
    //  N
    
    + (UIColor *)navajoWhiteColor;
    + (UIColor *)navyColor;
    
    //  O
    
    + (UIColor *)oldLaceColor;
    + (UIColor *)oliveColor;
    + (UIColor *)oliveDrabColor;
    //+ (UIColor *)orangeColor;
    + (UIColor *)orangeRedColor;
    + (UIColor *)orchidColor;
    
    //  P
    
    + (UIColor *)paleGoldenRodColor;
    + (UIColor *)paleGreenColor;
    + (UIColor *)paleTurquoiseColor;
    + (UIColor *)paleVioletRedColor;
    + (UIColor *)papayaWhipColor;
    + (UIColor *)peachPuffColor;
    + (UIColor *)peruColor;
    + (UIColor *)pinkColor;
    + (UIColor *)plumColor;
    + (UIColor *)powderBlueColor;
    //+ (UIColor *)purpleColor;
    
    //  R
    
    //+ (UIColor *)redColor;
    + (UIColor *)rosyBrownColor;
    + (UIColor *)royalBlueColor;
    
    //  S
    
    + (UIColor *)saddleBrownColor;
    + (UIColor *)salmonColor;
    + (UIColor *)sandyBrownColor;
    + (UIColor *)seaGreenColor;
    + (UIColor *)seaShellColor;
    + (UIColor *)siennaColor;
    + (UIColor *)silverColor;
    + (UIColor *)skyBlueColor;
    + (UIColor *)slateBluColor;
    + (UIColor *)slateGrayColor;
    + (UIColor *)snowColor;
    + (UIColor *)springGreenColor;
    + (UIColor *)steelBlueColor;
    
    //  T
    
    + (UIColor *)tanColor;
    + (UIColor *)tealColor;
    + (UIColor *)thistleColor;
    + (UIColor *)tomatoColor;
    + (UIColor *)turquoiseColor;
    
    //  V
    
    + (UIColor *)violetColor;
    
    //  W
    
    + (UIColor *)wheatColor;
    
    //+ (UIColor *)whiteColor;
    
    + (UIColor *)whiteSmokeColor;
    
    //  Y
    
    //+ (UIColor *)yellowColor;
    + (UIColor *)yellowGreenColor;
    ```
