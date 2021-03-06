@interface TestingUserDefaults : NSObject
{
    NSMutableDictionary *data;
}

- (void) setObject: (id) value forKey: (NSString*) defaultName;
- (void) setInteger: (NSInteger) value forKey: (NSString*) defaultName;
- (void) setBool: (BOOL) value forKey: (NSString*) defaultName;

- (id) objectForKey: (NSString*) defaultName;
- (NSInteger) integerForKey: (NSString*) defaultName;
- (BOOL) boolForKey: (NSString*) defaultName;

- (void) synchronize;

@end
