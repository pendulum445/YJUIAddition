//
//  UIColor+Addition.h
//  YJUIAddition
//
//  Created by liaoyunjie on 2022/11/22.
//

#ifndef UIColor_Addition_h
#define UIColor_Addition_h


#import <UIKit/UIKit.h>

#define YJUIColorBlack [UIColor lightColor:UIColor.blackColor darkColor:UIColor.whiteColor]
#define YJUIColorWhite [UIColor lightColor:UIColor.whiteColor darkColor:UIColor.blackColor]
#define YJUIColorGray20 [YJUIColorBlack colorWithAlphaComponent:0.2]
#define YJUIColorGray40 [YJUIColorBlack colorWithAlphaComponent:0.4]

@interface UIColor (Addition)

+ (UIColor *)lightColor:(UIColor *)lightColor darkColor:(UIColor *)darkColor;

@end


#endif /* UIColor_Addition_h */
