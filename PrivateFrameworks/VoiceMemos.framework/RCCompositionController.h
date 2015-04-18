//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSURL, RCCaptureSession, RCComposition;

@interface RCCompositionController : NSObject
{
    BOOL _hasStartedRecording;
    NSMutableDictionary *_accessTokensByName;
    NSMutableArray *_undoableCompositionItemStack;
    RCComposition *_composition;
    RCCaptureSession *_activeCaptureSession;
}

+ (id)compositionControllerForComposedAVURL:(id)arg1;
- (id)_activitySourceRecording;
- (void)rcs_repairDecomposedFragmentMetadataIfNecessary;
- (void)rcs_composeToFinalDestinationAndDeleteDecomposedFragments:(BOOL)arg1 composeWaveform:(BOOL)arg2 canGenerateWaveformByProcessingAVURL:(BOOL)arg3 completionBlock:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) BOOL isTopUndoableCompositionFromCapture;
- (void)finalizingComposedAssetWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginAccessSessionToPlayTimeRange:(CDStruct_73a5d3ca)arg1 readyToPlayBlock:(CDUnknownBlockType)arg2;
- (void)endPreviewAccessSession;
- (void)prepareToBeginEditingWithReadyBlock:(CDUnknownBlockType)arg1;
- (void)_eaccess_repairDecomposedFragmentMetadataIfNecessaryAndSave:(BOOL)arg1;
@property(readonly, nonatomic) unsigned int countOfUndoableCompositions;
- (void)_reloadComposition;
- (void)_eaccess_saveCompositionAfterCommitingFinalizedCaptureDataSource:(id)arg1;
- (void)_eaccess_saveCompositionAfterAppendingInProgressCaptureDataSource:(id)arg1;
- (void)_eaccess_saveCompositionAndRecordingDuration:(BOOL)arg1;
- (id)_compositionByReplacingDecomposedFragments:(id)arg1;
- (id)_nextCaptureWaveformDataSourceWithDestinationTimeRange:(CDStruct_73a5d3ca)arg1 isOverdub:(BOOL)arg2;
- (void)_endAccessSessionWithToken:(id)arg1;
- (void)beginAccessSessionToTrimAsCopy:(BOOL)arg1 assetReadyBlock:(CDUnknownBlockType)arg2;
- (void)deleteCompositionFromFileSystemAndDatabase;
- (void)activeRecordingSessionWillFinish;
- (void)performCompositionRedoWithRedoItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)performCompositionUndoWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)deleteCompositionFromFileSystem;
- (void)beginRecordingWithInputDevice:(id)arg1 captureInsertionRange:(CDStruct_73a5d3ca)arg2 isUndoable:(BOOL)arg3 isOverdub:(BOOL)arg4 sessionPreparedBlock:(CDUnknownBlockType)arg5 sessionFinishedBlock:(CDUnknownBlockType)arg6;
- (void)endAccessSessions;
- (void)endTrimAccessSession;
- (void)beginAccessSessionToExportWithAssetReadyBlock:(CDUnknownBlockType)arg1;
- (id)initWithComposition:(id)arg1;
@property(readonly, nonatomic) NSURL *savedRecordingURI;
- (void)sanitizeWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) RCCaptureSession *activeCaptureSession; // @synthesize activeCaptureSession=_activeCaptureSession;
@property(retain, nonatomic) RCComposition *composition; // @synthesize composition=_composition;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize)arg3;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (void).cxx_destruct;
- (void)endEditing;
- (id)init;

@end

