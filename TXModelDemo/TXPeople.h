//
//  TXPeople.h
//  TXModelDemo
//
//  Created by xtz_pioneer on 2018/5/29.
//  Copyright © 2018年 zhangxiong. All rights reserved.
//

#import "TXModel.h"

@interface TXPeople : TXModel
@property (nonatomic,copy)NSString * name;
@property (nonatomic,copy)NSString * sex;
@property (nonatomic,strong)NSNumber * age;
@property (nonatomic,strong)NSString * occupation;
@end
