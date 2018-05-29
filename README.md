# TXModel
* 轻量级的数据转模型工具,比你想象中的更简单、更便捷、更安全

### cocoapods集成
* pod 'TXModel', '~> 1.0'
### 代码片段

```objc
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

```
### 使用方法
* ## 继承TXModel
* ## 如:TXPeople.h文件

```objc
#import "TXModel.h"

@interface TXPeople : TXModel
@property (nonatomic,copy)NSString * name;
@property (nonatomic,copy)NSString * sex;
@property (nonatomic,strong)NSNumber * age;
@property (nonatomic,strong)NSString * occupation;
@end

```

