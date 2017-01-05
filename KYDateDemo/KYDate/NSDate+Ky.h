//
//  NSDate+Ky.h
//  ZTEPark
//
//  Created by 易之盛 on 16/9/19.
//  Copyright © 2016年 康义. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (Ky)

/**
 获取指定年月日时分秒的NSDate
 
 @param DateStr 字符串年月日 例如:2016-02-04 12:20:01
 @return NSDate类型时间
 */
+ (NSDate *)getNowTimeStr2:(NSString *)DateStr;

/**
 获取当前日期字符串
 
 @return 当前日期 年-月-日 星期 例如:2016-02-02 星期三
 */
+ (NSString *)getNowDate;

/**
 获取指定日期字符串

 @param date 指定NSDate
 @return 当前日期 年-月-日 时分秒 例如:2016-02-02 14:12:03
 */
+ (NSString *)getNowDate:(NSDate *)date;

/**
 获取当前日期字符串
 
 @return 当前日期 年-月-日 时分 例如:2016-04-02 14:12
 */
+ (NSString *)getNowDate3;

/**
 获取当前日期字符串
 
 @return 当前日期 年-月 例如:2016-04
 */
+ (NSArray *)getNowDate2;

/**
 获取当前时间字符串
 
 @return 当前时间 时分秒 例如:14:20:21
 */
+ (NSString *)getNowTime;

/**
 获取当前时间字符串
 
 @return 当前时间 时分 例如:14:20
 */
+ (NSString *)getNowTime2;

/**
 获取距今日某天日期字符串
 
 @param days 据今天之后几天 之后为正数，之前为负数
 @return 未来时间 年月日 例如:今天2016-05-04 传入30 返回2016-06-03  传入-30 返回2016-04-04
 */
+ (NSString *)getFutureTime:(NSInteger)days;

/**
 获取未来某天日期字符串
 
 @param days 根据指定日期获取指定日期之后的某日 之后为正数，之前为负数
 @param date NSDate类型的指定日期
 @return 未来时间 年月日 例如:指定日期为2016-12-31 传入1 返回为2017-01-01
 */
+ (NSString *)getFutureTime2:(NSInteger)days date:(NSDate *)date;

/**
 获取未来某天日期
 
 @param days 据今天之后几天 之后为正数，之前为负数 例如:-1
 @return 未来时间 年月日 时分 例如:当前日期为2016-12-30 返回为2016-12-29
 */
+ (NSString *)getFutureTime2:(NSInteger)days;

/**
 获取未来某天日期字符串
 
 @param days 根据指定日期获取指定日期之后的某日 之后为正数，之前为负数 例如:1
 @param format 字符串日期 格式年月日 例如:2016-02-02
 @return 未来时间 年月日 时分 例如:2016-02-03 当前时分秒
 */
+ (NSString *)getFutureTime3:(NSInteger)days dateFormat:(NSString *)format;

/**
 比较时间
 
 @param oneDay     时间1 时分秒 例如:14:15:02
 @param anotherDay 时间2 时分秒 例如:13:15:02
 
 @return 1:时间1较晚 -1:时间2较晚 0:相同
 */
+(int)compareOneDay:(NSString *)oneDay withAnotherDay:(NSString *)anotherDay;

/**
 比较时间
 
 @param oneDay     时间1 年月日 2016-02-02
 @param anotherDay 时间2 年月日 2016-02-02
 
 @return 1:时间1较晚 -1:时间2较晚 0:相同
 */
+(int)compareOneDay1:(NSString *)oneDay withAnotherDay:(NSString *)anotherDay;

/**
 年月日后面添加时分秒
 
 @param time 传入年月日 2016-02-02
 @return 年月日 + 当前时分秒 2016-02-02 16:46:03
 */
+ (NSString *)spliceTime:(NSString *)time;



@end
