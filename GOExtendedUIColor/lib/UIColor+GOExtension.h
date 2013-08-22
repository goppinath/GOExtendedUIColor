//
//  UIColor+GOExtension.h
//  GOExtendedUIColor
//
//  Created by Goppinath Thurairajah on 15.08.13.
//  Copyright (c) 2013 Goppinath Thurairajah. http://goppinath.com
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.

#import <UIKit/UIKit.h>

@interface UIColor (GOExtension)

//  custom initialisations

+ (UIColor *)RGBColorWithRed:(NSUInteger)red green:(NSUInteger)green blue:(NSUInteger)blue alpha:(CGFloat)alpha;

+ (UIColor *)RGBColorWithRed:(NSUInteger)red green:(NSUInteger)green blue:(NSUInteger)blue;

+ (UIColor *)colorWithHexString:(NSString *)hexColorString alpha:(CGFloat)alpha;

+ (UIColor *)colorWithHexString:(NSString *)hexColorString;

- (CGFloat)getComponentValueForIndex:(NSUInteger)index;

//  get color components and values

- (CGFloat)redValue;
- (NSUInteger)RGBRedValue;

- (CGFloat)greenValue;
- (NSUInteger)RGBGreenValue;

- (CGFloat)blueValue;
- (NSUInteger)RGBBlueValue;

- (CGFloat)alphaValue;

//  custom X11/W3C colors

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

@end
