//
//  ViewController.m
//  TXModelDemo
//
//  Created by xtz_pioneer on 2018/5/29.
//  Copyright © 2018年 zhangxiong. All rights reserved.
//

#import "ViewController.h"
#import "TXPeople.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    
    
    NSDictionary * dict=@{@"name":@"小明",
                          @"sex":@"男",
                          @"age":@17,
                          };
    TXPeople * people1=[[TXPeople alloc]initWithDictionary:dict];
    NSLog(@"people1.name:%@",people1.name);
    NSLog(@"people1.sex:%@",people1.sex);
    NSLog(@"people1.age:%@",people1.age);
    NSLog(@"people1.occupation:%@",people1.occupation);
    NSLog(@"people1.valueForJsonString:%@",people1.valueForJsonString);
    NSLog(@"people1.valueForKey:%@",people1.valueForKey);
    NSLog(@"people1.valueForArray:%@",people1.valueForArray);
    
    
    
    NSString * str=@"{\"name\" : \"小花\",\"sex\" : \"女\",\"age\" : 16,\"occupation\" :\"学生\" }";
    TXPeople * people2=[[TXPeople alloc]initWithJsonString:str];
    NSLog(@"people2.name:%@",people2.name);
    NSLog(@"people2.sex:%@",people2.sex);
    NSLog(@"people2.age:%@",people2.age);
    NSLog(@"people2.occupation:%@",people2.occupation);
    NSLog(@"people2.valueForJsonString:%@",people2.valueForJsonString);
    NSLog(@"people2.valueForKey:%@",people2.valueForKey);
    NSLog(@"people2.valueForArray:%@",people2.valueForArray);
    
    
    
    // Do any additional setup after loading the view, typically from a nib.
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
