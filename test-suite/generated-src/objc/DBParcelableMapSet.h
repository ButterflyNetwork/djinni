// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from parcelable.djinni

#import <Foundation/Foundation.h>

@interface DBParcelableMapSet : NSObject
- (nonnull instancetype)init NS_UNAVAILABLE;
+ (nonnull instancetype)new NS_UNAVAILABLE;
- (nonnull instancetype)initWithMapSet:(nonnull NSDictionary<NSString *, NSSet<NSString *> *> *)mapSet NS_DESIGNATED_INITIALIZER;
+ (nonnull instancetype)parcelableMapSetWithMapSet:(nonnull NSDictionary<NSString *, NSSet<NSString *> *> *)mapSet;

@property (nonatomic, readonly, nonnull) NSDictionary<NSString *, NSSet<NSString *> *> * mapSet;

@end