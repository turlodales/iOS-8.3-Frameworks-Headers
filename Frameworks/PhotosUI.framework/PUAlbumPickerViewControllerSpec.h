//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PUAlbumListViewController, PUAlbumListViewControllerSpec;

@interface PUAlbumPickerViewControllerSpec : NSObject
{
    unsigned int _supportedInterfaceOrientations;
    PUAlbumListViewControllerSpec *_albumListViewControllerSpec;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int supportedInterfaceOrientations; // @synthesize supportedInterfaceOrientations=_supportedInterfaceOrientations;
@property(readonly, nonatomic) PUAlbumListViewControllerSpec *albumListViewControllerSpec; // @synthesize albumListViewControllerSpec=_albumListViewControllerSpec;
@property(readonly, nonatomic) PUAlbumListViewController *newAlbumListViewController;
- (void)configureSessionInfo:(id)arg1;

@end

