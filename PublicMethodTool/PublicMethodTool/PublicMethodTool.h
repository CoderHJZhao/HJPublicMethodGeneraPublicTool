//
//  PublicMethodTool.h
//  PublicMethodTool
//
//  Created by ZhaoHanjun on 16/6/1.
//  Copyright © 2016年 https://github.com/CoderHJZhao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
/**
 * @author zhaohanjun, 16-06-01 10:06:33
 *
 * @brief 公共方法类
 */
@interface PublicMethodTool : NSObject

+ (CGFloat)getFileSize:(NSString *)filePath;
+ (CGFloat)diskOfAllSizeMBytes;
+ (CGFloat)diskOfFreeSizeMBytes;
+ (NSString *)firstCharacterWithString:(NSString *)string;
+ (NSDictionary *)dictionaryOrderByCharacterWithOriginalArray:(NSArray *)array;
+ (NSString *)currentDateWithFormat:(NSString *)format;
+ (NSString *)timeIntervalFromLastTime:(NSString *)lastTime
                        lastTimeFormat:(NSString *)format1
                         ToCurrentTime:(NSString *)currentTime
                     currentTimeFormat:(NSString *)format2;
+ (NSString *)timeIntervalFromLastTime:(NSDate *)lastTime ToCurrentTime:(NSDate *)currentTime;
+ (UIColor *)colorWithHexString:(NSString *)color;
+ (UIImage *)filterWithOriginalImage:(UIImage *)image filterName:(NSString *)name;
+ (UIImage *)blurWithOriginalImage:(UIImage *)image blurName:(NSString *)name radius:(NSInteger)radius;
+ (UIImage *)colorControlsWithOriginalImage:(UIImage *)image
                                 saturation:(CGFloat)saturation
                                 brightness:(CGFloat)brightness
                                   contrast:(CGFloat)contrast;
+ (UIVisualEffectView *)effectViewWithFrame:(CGRect)frame;
+ (UIImage *)shotScreen;
+ (UIImage *)shotWithView:(UIView *)view;
+ (UIImage *)shotWithView:(UIView *)view scope:(CGRect)scope;
+ (UIImage *)compressOriginalImage:(UIImage *)image toSize:(CGSize)size;
+ (NSData *)compressOriginalImage:(UIImage *)image toMaxDataSizeKBytes:(CGFloat)size;
+ (NSString *)getIPAddress;
+ (BOOL)isHaveSpaceInString:(NSString *)string;
+ (BOOL)isHaveString:(NSString *)string1 InString:(NSString *)string2;
+ (BOOL)isAllNum:(NSString *)string;
+ (UIView *)createDashedLineWithFrame:(CGRect)lineFrame
                           lineLength:(int)length
                          lineSpacing:(int)spacing
                            lineColor:(UIColor *)color;
@end
