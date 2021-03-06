//
//  LXScrollLabel.h
//  LXScrollLabel
//
//  Created by 张展 on 15/7/13.
//  Copyright (c) 2015年 Lee. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 文本滚动方式
 */
typedef enum : NSUInteger {
    /**
     *  @brief  重复来回滚动
     */
    LXScrollLabelTypeRepeat,
    /**
     *  @brief  点击一下才滚动一个来回
     */
    LXScrollLabelTypeClick,
    /**
     *  @brief  不滚动
     */
    LXScrollLabelTypeBan,

} LXScrollLabelType;

@interface LXScrollLabel : UIView
#pragma mark - LXScrollLabel属性
/**
 *  @brief  是否开始手势移动文字
 */
@property (nonatomic) IBInspectable BOOL gestureEnable;
/**
 *  @brief  滚动类型
 */
@property (nonatomic) IBInspectable LXScrollLabelType type;
/**
 *  @brief  滚动一来回时间，单位秒,小于等于0时类型修改为LXScrollLabelTypeBan
 */
@property (nonatomic) IBInspectable CGFloat time;

/**
 *  @brief  开始滚动
 */
-(void)startAnimation;
/**
 *  @brief  停止滚动
 */
-(void)stopAnimation;

@end

/**
 *  @brief  为了方便把UILabel替换成LXScrollLabel，把UILabel的属性都在这写一下把值传给_label。
 */

@interface LXScrollLabel (UILabelProperty)

#pragma mark - UILabel属性

@property (nonatomic) IBInspectable NSString *text;

@property (nonatomic) IBInspectable UIFont *font;

@property (nonatomic) IBInspectable UIColor *textColor;

@property (nonatomic) UIColor *shadowColor;

@property (nonatomic) CGSize shadowOffset;

@property (nonatomic) IBInspectable NSTextAlignment textAlignment;

@property (nonatomic) NSLineBreakMode lineBreakMode;

@property (nonatomic) NSAttributedString *attributedText NS_AVAILABLE_IOS(6_0);

@property (nonatomic) UIColor *highlightedTextColor;

@property (nonatomic,getter=isHighlighted) BOOL highlighted;

@property (nonatomic,getter=isEnabled) BOOL enabled;

@property (nonatomic) NSInteger numberOfLines;

@property (nonatomic) BOOL adjustsFontSizeToFitWidth;

@property (nonatomic) UIBaselineAdjustment baselineAdjustment;

@property (nonatomic) CGFloat minimumScaleFactor NS_AVAILABLE_IOS(6_0);

@property (nonatomic) CGFloat preferredMaxLayoutWidth NS_AVAILABLE_IOS(6_0);


- (CGRect)textRectForBounds:(CGRect)bounds limitedToNumberOfLines:(NSInteger)numberOfLines;

- (void)drawTextInRect:(CGRect)rect;

@end
