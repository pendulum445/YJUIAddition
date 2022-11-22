//
//  UIColor+Addition.m
//  YJUIAddition
//
//  Created by liaoyunjie on 2022/11/22.
//

#import "UIColor+Addition.h"

@implementation UIColor (Addition)

+ (UIColor *)lightColor:(UIColor *)lightColor darkColor:(UIColor *)darkColor {
    if (@available(iOS 13.0, *)) {
        return [UIColor colorWithDynamicProvider:^UIColor * _Nonnull(UITraitCollection * _Nonnull traitCollection) {
            if (traitCollection.userInterfaceStyle == UIUserInterfaceStyleLight) {
                return lightColor;
            } else {
                return darkColor;
            }
        }];
    } else {
        return [UIColor clearColor];
    }
}

@end
