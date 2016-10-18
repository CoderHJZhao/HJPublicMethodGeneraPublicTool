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
@property (nonatomic, copy) NSString *yearStr;
@property (nonatomic, copy) NSString *monthStr;
@property (nonatomic, copy) NSString *dayStr;
@property (nonatomic, copy) NSString *weekStr;
#pragma mark - 磁盘相关

/** 获取文件大小*/
+ (CGFloat)getFileSize:(NSString *)filePath;
/** 获取磁盘总空间*/
+ (CGFloat)diskOfAllSizeMBytes;
/** 获取磁盘剩余空间*/
+ (CGFloat)diskOfFreeSizeMBytes;
/** 获取字符串(或汉字)首字母*/
+ (NSString *)firstCharacterWithString:(NSString *)string;
/** 将字符串数组按照元素首字母顺序进行排序分组*/
+ (NSDictionary *)dictionaryOrderByCharacterWithOriginalArray:(NSArray *)array;

#pragma mark - 日期相关

/** 获取当前时间
 format: @"yyyy-MM-dd HH:mm:ss"、@"yyyy年MM月dd日 HH时mm分ss秒"*/
+ (NSString *)currentDateWithFormat:(NSString *)format;
/**
 *  计算上次日期距离现在多久
 *
 *  @param lastTime    上次日期(需要和格式对应)
 *  @param format1     上次日期格式
 *  @param currentTime 最近日期(需要和格式对应)
 *  @param format2     最近日期格式
 *
 *  @return xx分钟前、xx小时前、xx天前
 */
+ (NSString *)timeIntervalFromLastTime:(NSString *)lastTime
                        lastTimeFormat:(NSString *)format1
                         ToCurrentTime:(NSString *)currentTime
                     currentTimeFormat:(NSString *)format2;
/* 获取制定日期的时间，转化格式*/
- (NSString *)obtainTimeWith:(NSDate *)date format:(NSString *)format;
/* 根据date获取年月星期*/
- (void)obtainCurrentDetailTimeWithDate:(NSDate *)currentDate;
/* date转时间戳*/
- (NSString *)dateToTimeIntervalStrWithDate:(NSDate *)date;
/* 时间戳转date*/
- (NSDate *)TimeInvalToDateWithStr:(NSString *)str;

- (void)timingStartWithBtn:(UIButton *)btn;


#pragma mark - 图片处理和16进制颜色转换

/** 将十六进制颜色转换为 UIColor 对象*/
+ (UIColor *)colorWithHexString:(NSString *)color;
/**
 怀旧 --> CIPhotoEffectInstant                         单色 --> CIPhotoEffectMono
// 黑白 --> CIPhotoEffectNoir                            褪色 --> CIPhotoEffectFade
// 色调 --> CIPhotoEffectTonal                           冲印 --> CIPhotoEffectProcess
// 岁月 --> CIPhotoEffectTransfer                        铬黄 --> CIPhotoEffectChrome
// CILinearToSRGBToneCurve, CISRGBToneCurveToLinear, CIGaussianBlur, CIBoxBlur, CIDiscBlur, CISepiaTone, CIDepthOfField 
 */
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
