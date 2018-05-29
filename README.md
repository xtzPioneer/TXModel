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
* 使用实例
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

