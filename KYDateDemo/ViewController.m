//
//  ViewController.m
//  KYDateDemo
//
//  Created by 易之盛 on 17/1/5.
//  Copyright © 2017年 康义. All rights reserved.
//

#import "ViewController.h"
#import "NSDate+Ky.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    NSLog(@"获取指定年月日时分秒的NSDate:%@",[NSDate getNowTimeStr2:@"2014-02-16 12:52:03"]);
    
    NSLog(@"获取当前日期(年月日 星期):%@",[NSDate getNowDate]);
    
    NSLog(@"获取指定日期(年月日 时分秒):%@",[NSDate getNowDate:[NSDate date]]);
    
    NSLog(@"获取当前日期(年月日 时分):%@",[NSDate getNowDate3]);
    
    NSLog(@"获取最近三个月(年月):%@",[NSDate getNowDate2]);
    
    NSLog(@"获取当前时间(时分秒):%@",[NSDate getNowTime]);
    
    NSLog(@"获取当前时间(时分):%@",[NSDate getNowTime2]);
    
    NSLog(@"获取距今日之前或之后某天日期(年月日):%@",[NSDate getFutureTime:-3]);
    
    NSLog(@"获取距今日之前或之后某天日期(年月日 时分):%@",[NSDate getFutureTime2:2]);
    
    NSLog(@"获取距指定日期之前或之后某天日期(年月日):%@",[NSDate getFutureTime2:-5 date:[NSDate getNowTimeStr2:@"2014-02-19 12:52:03"]]);
    
    NSLog(@"获取距今日之前或之后某天日期(年月日 时分):%@",[NSDate getFutureTime2:-3]);
    
    NSLog(@"获取距某日之前或之后某天日期(年月日 时分):%@",[NSDate getFutureTime3:-3 dateFormat:@"2016-12-01"]);
    
    //比较时分秒
    //时间1较晚 -1:时间2较晚 0:相同
    NSLog(@"%d",[NSDate compareOneDay:@"14:12:11" withAnotherDay:@"14:12:10"]);
    
    //比较年月日
    //时间1较晚 -1:时间2较晚 0:相同
    NSLog(@"%d",[NSDate compareOneDay1:@"2016-11-12" withAnotherDay:@"2016-11-05"]);
    
}

@end
