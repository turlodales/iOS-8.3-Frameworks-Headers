//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDictionary, NSString;

@interface MSASEnqueuedCommand : NSObject <NSCoding>
{
    NSString *_command;
    NSDictionary *_variantParam;
    NSDictionary *_invariantParam;
}

+ (id)commandwithCommand:(id)arg1 variantParam:(id)arg2 invariantParam:(id)arg3;
+ (id)command;
@property(retain, nonatomic) NSDictionary *invariantParam; // @synthesize invariantParam=_invariantParam;
@property(retain, nonatomic) NSDictionary *variantParam; // @synthesize variantParam=_variantParam;
@property(copy, nonatomic) NSString *command; // @synthesize command=_command;
- (id)initWithCommand:(id)arg1 variantParam:(id)arg2 invariantParam:(id)arg3;
- (BOOL)canBeGroupedWithCommand:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

