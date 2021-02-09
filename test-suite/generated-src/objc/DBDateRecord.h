// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from date.djinni

#import <Foundation/Foundation.h>

@interface DBDateRecord : NSObject
- (nonnull instancetype)init NS_UNAVAILABLE;
+ (nonnull instancetype)new NS_UNAVAILABLE;
- (nonnull instancetype)initWithCreatedAt:(nonnull NSDate *)createdAt NS_DESIGNATED_INITIALIZER;
+ (nonnull instancetype)dateRecordWithCreatedAt:(nonnull NSDate *)createdAt;

@property (nonatomic, readonly, nonnull) NSDate * createdAt;

- (NSComparisonResult)compare:(nonnull DBDateRecord *)other;

@end
