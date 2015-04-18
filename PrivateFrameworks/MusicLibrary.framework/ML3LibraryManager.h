//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ML3MusicLibrary;

@interface ML3LibraryManager : NSObject
{
    ML3MusicLibrary *_currentLibrary;
}

+ (id)sharedManager;
- (id)pathToLibraryForAccount:(id)arg1;
- (id)libraryForAccount:(id)arg1;
@property(retain, nonatomic) ML3MusicLibrary *currentLibrary;
- (void)_deviceSharedLibraryDidChangeDistributedNotification:(id)arg1;
- (void)_switchToLibrary:(id)arg1;
- (void)_teardownNotifications;
- (void)_setupNotifications;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

