// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from duration.djinni

#import <Foundation/Foundation.h>

@interface DBRecordWithDurationAndDerivings : NSObject
- (nonnull instancetype)init NS_UNAVAILABLE;
+ (nonnull instancetype)new NS_UNAVAILABLE;
- (nonnull instancetype)initWithDt:(NSTimeInterval)dt NS_DESIGNATED_INITIALIZER;
+ (nonnull instancetype)recordWithDurationAndDerivingsWithDt:(NSTimeInterval)dt;

@property (nonatomic, readonly) NSTimeInterval dt;

- (NSComparisonResult)compare:(nonnull DBRecordWithDurationAndDerivings *)other;

@end
