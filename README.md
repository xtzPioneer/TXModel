# TXModel
* 轻量级的数据转模型工具,比你想象中的更简单、更便捷、更安全

### TXModel优点
* 不但比MJExtension体积更小而且依然能完成MJExtension的同等功能
* 方法较低层利于封装和扩展
* 依赖性几乎为零
* 开发者极易上手
* 便捷性强

### TXModel缺点
* 逻辑复杂、多变的情况下需要开发者二次封装才能完成各项任务

### cocoapods集成
* pod 'TXModel', '~> 1.0.1'
### 代码片段

```objc
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

```
### 使用方法
* 创建模型时继承TXModel类

```objc
#import "TXModel.h"

@interface TXPeople : TXModel
@property (nonatomic,copy)NSString * name;
@property (nonatomic,copy)NSString * sex;
@property (nonatomic,strong)NSNumber * age;
@property (nonatomic,strong)NSString * occupation;
@end

```
* 使用示例:
```objc
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
```
* 打印示例:
```objc
2018-05-29 14:26:24.085763+0800 TXModelDemo[17840:309289] people1.name:小明
2018-05-29 14:26:24.085944+0800 TXModelDemo[17840:309289] people1.sex:男
2018-05-29 14:26:24.086073+0800 TXModelDemo[17840:309289] people1.age:17
2018-05-29 14:26:24.086186+0800 TXModelDemo[17840:309289] people1.occupation:(null)
2018-05-29 14:26:24.086522+0800 TXModelDemo[17840:309289] people1.valueForJsonString:{
  "age" : 17,
  "sex" : "男",
  "name" : "小明",
  "occupation" : null
}
2018-05-29 14:26:24.086827+0800 TXModelDemo[17840:309289] people1.valueForKey:{
    age = 17;
    name = "\U5c0f\U660e";
    occupation = "<null>";
    sex = "\U7537";
}
2018-05-29 14:26:24.087065+0800 TXModelDemo[17840:309289] people1.valueForArray:(
    17,
    "\U7537",
    "\U5c0f\U660e",
    "<null>"
)
2018-05-29 14:26:24.087350+0800 TXModelDemo[17840:309289] people2.name:小花
2018-05-29 14:26:24.087485+0800 TXModelDemo[17840:309289] people2.sex:女
2018-05-29 14:26:24.087600+0800 TXModelDemo[17840:309289] people2.age:16
2018-05-29 14:26:24.087731+0800 TXModelDemo[17840:309289] people2.occupation:学生
2018-05-29 14:26:24.087892+0800 TXModelDemo[17840:309289] people2.valueForJsonString:{
  "age" : 16,
  "sex" : "女",
  "name" : "小花",
  "occupation" : "学生"
}
2018-05-29 14:26:24.088079+0800 TXModelDemo[17840:309289] people2.valueForKey:{
    age = 16;
    name = "\U5c0f\U82b1";
    occupation = "\U5b66\U751f";
    sex = "\U5973";
}
2018-05-29 14:26:24.088262+0800 TXModelDemo[17840:309289] people2.valueForArray:(
    16,
    "\U5973",
    "\U5c0f\U82b1",
    "\U5b66\U751f"
)
```
