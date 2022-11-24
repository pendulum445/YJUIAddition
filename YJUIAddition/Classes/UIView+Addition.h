//
//  UIView+Addition.h
//  YJUIAddition
//
//  Created by liaoyunjie on 2022/11/22.
//

#ifndef UIView_Addition_h
#define UIView_Addition_h


#import <UIKit/UIKit.h>

#define SCREEN_WIDTH [UIScreen mainScreen].bounds.size.width
#define SCREEN_HEIGHT [UIScreen mainScreen].bounds.size.height
#define SCREEN_SAFE_TOP [UIView screenSafeTop]
#define SCREEN_SAFE_BOTTOM [UIView screenSafeBottom]

@interface UIView (Addition)

@property (nonatomic, assign) CGFloat width;
@property (nonatomic, assign) CGFloat height;
@property (nonatomic, assign) CGFloat top;
@property (nonatomic, assign) CGFloat bottom;
@property (nonatomic, assign) CGFloat left;
@property (nonatomic, assign) CGFloat right;
@property (nonatomic, assign) CGFloat centerX;
@property (nonatomic, assign) CGFloat centerY;
@property (nonatomic, assign) CGFloat cornerRadius;
@property (nonatomic, assign) CGSize size;

+ (CGFloat)screenSafeTop;
+ (CGFloat)screenSafeBottom;
+ (UIView *)darkModeMaskView;

@end


#endif /* UIView_Addition_h */
