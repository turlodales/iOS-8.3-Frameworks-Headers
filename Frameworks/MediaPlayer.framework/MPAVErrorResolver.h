//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MPAVErrorResolver : NSObject
{
    id <MPAVErrorResolverDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MPAVErrorResolverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sendDidResolveError:(id)arg1 withResolution:(int)arg2;
- (void)resolveError:(id)arg1;

@end

