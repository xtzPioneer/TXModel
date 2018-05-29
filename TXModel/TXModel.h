//
//  TXModel.h
//  TXModel
//
//  Created by xtz_pioneer on 2018/5/29.
//  Copyright © 2018年 zhangxiong. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <objc/runtime.h>

@interface TXModel : NSObject

/*字典初始化*/
- (instancetype)initWithDictionary:(NSDictionary*)dictionary;
+ (instancetype)modelWithDictionary:(NSDictionary*)dictionary;
/*json初始化*/
- (instancetype)initWithJsonString:(NSString*)jsonString;
+ (instancetype)modelWithJsonString:(NSString*)jsonString;
/*获取对象的值*/
+ (NSDictionary*)objectValue:(id)obj;
/*获取对象内部*/
+ (id)objectInternal:(id)obj;
/*字典转化为数组*/
+ (NSArray*)dictionaryTransitionsAarrayWithDictionary:(NSDictionary*)dictionary;
/*当前对象的值*/
- (NSDictionary*)valueForKey;
/*当前对象的值的集合*/
- (NSArray*)valueForArray;
/*json转字典*/
+ (NSDictionary*)dictionaryWithJsonString:(NSString*)jsonString;
/*字典转json*/
+ (NSString*)jsonStringWithDictionary:(NSDictionary*)dictionary;
/*当前对象的Json*/
- (NSString*)valueForJsonString;

@end
