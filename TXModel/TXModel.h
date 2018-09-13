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

/**
 *  使用字典初始化 (对象方法)
 *  @param dictionary 字典 (必填)
 */
- (instancetype)initWithDictionary:(NSDictionary*)dictionary;

/**
 *  使用字典初始化 (类方法)
 *  @param dictionary 字典 (必填)
 */
+ (instancetype)modelWithDictionary:(NSDictionary*)dictionary;

/**
 *  使用Json初始化 (对象方法)
 *  @param jsonString Json字符串 (必填)
 */
- (instancetype)initWithJsonString:(NSString*)jsonString;

/**
 *  使用Json初始化 (类方法)
 *  @param jsonString Json字符串 (必填)
 */
+ (instancetype)modelWithJsonString:(NSString*)jsonString;

/**
 *  获取对象的值
 */
+ (NSDictionary*)objectValue:(id)obj;

/**
 *  获取对象内部
 */
+ (id)objectInternal:(id)obj;

/**
 *  字典转化为数组
 *  @param dictionary 字典 (必填)
 */
+ (NSArray*)dictionaryTransitionsAarrayWithDictionary:(NSDictionary*)dictionary;

/**
 *  当前对象的值
 */
- (NSDictionary*)valueForKey;

/**
 *  当前对象的值的集合
 */
- (NSArray*)valueForArray;

/**
 *  Json转字典
 *  @param jsonString Json字符串 (必填)
 */
+ (NSDictionary*)dictionaryWithJsonString:(NSString*)jsonString;

/**
 *  字典转Json
 *  @param dictionary 字典 (必填)
 */
+ (NSString*)jsonStringWithDictionary:(NSDictionary*)dictionary;

/**
 *  当前对象的Json
 */
- (NSString*)valueForJsonString;

/**
 *  批量将数据转成该类模型集合
 *  @param dictionarys 字典集合 (必填)
 */
+ (NSArray*)arrayOfModelsFromDictionarys:(NSArray<NSDictionary*>*)dictionarys;

@end
