//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PXAnimation : NSObject
{
}

+ (int)readChartBuildType:(id)arg1;
+ (id)readAnimVariant:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (void)readCommonMediaNodeData:(struct _xmlNode *)arg1 commonMediaData:(id)arg2 drawingState:(id)arg3;
+ (void)readPointFromNode:(struct _xmlNode *)arg1 tgtPoint:(struct CGPoint *)arg2;
+ (void)readCommonBehaviorData:(struct _xmlNode *)arg1 tgtCommonBehaviorData:(id)arg2 drawingState:(id)arg3;
+ (void)readChartType:(id)arg1 oleChartTarget:(id)arg2;
+ (void)readChartBuildStep:(id)arg1 chartTarget:(id)arg2;
+ (id)newShapeTarget:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)newTarget:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (void)readTriggerEvent:(id)arg1 timeCondition:(id)arg2;
+ (void)readCondition:(struct _xmlNode *)arg1 timeCondition:(id)arg2 drawingState:(id)arg3;
+ (void)readAnimSetElement:(struct _xmlNode *)arg1 timeNode:(id)arg2 drawingState:(id)arg3;
+ (void)readAnimSequentialElement:(struct _xmlNode *)arg1 timeNode:(id)arg2 drawingState:(id)arg3;
+ (void)readAnimParallelElement:(struct _xmlNode *)arg1 timeNode:(id)arg2 drawingState:(id)arg3;
+ (void)readAnimCmdElement:(struct _xmlNode *)arg1 timeNode:(id)arg2 drawingState:(id)arg3;
+ (void)readAnimVideoElement:(struct _xmlNode *)arg1 timeNode:(id)arg2 drawingState:(id)arg3;
+ (void)readAnimAudioElement:(struct _xmlNode *)arg1 timeNode:(id)arg2 drawingState:(id)arg3;
+ (void)readAnimScaleElement:(struct _xmlNode *)arg1 timeNode:(id)arg2 drawingState:(id)arg3;
+ (void)readAnimRotationElement:(struct _xmlNode *)arg1 timeNode:(id)arg2 drawingState:(id)arg3;
+ (void)readAnimMotionElement:(struct _xmlNode *)arg1 timeNode:(id)arg2 drawingState:(id)arg3;
+ (void)readAnimEffectElement:(struct _xmlNode *)arg1 timeNode:(id)arg2 drawingState:(id)arg3;
+ (void)readAnimElement:(struct _xmlNode *)arg1 timeNode:(id)arg2 drawingState:(id)arg3;
+ (void)readStConditionList:(struct _xmlNode *)arg1 commonTimeNodeData:(id)arg2 drawingState:(id)arg3;
+ (void)readIterate:(struct _xmlNode *)arg1 commonTimeNodeData:(id)arg2 drawingState:(id)arg3;
+ (void)readChildTimeNodeList:(struct _xmlNode *)arg1 commonTimeNodeData:(id)arg2 drawingState:(id)arg3;
+ (void)readRestartType:(id)arg1 commonTimeNodeData:(id)arg2;
+ (void)readPresetClass:(id)arg1 commonTimeNodeData:(id)arg2;
+ (void)readTimeNodeType:(id)arg1 commonTimeNodeData:(id)arg2;
+ (void)readAnimationFromTimingXmlNode:(struct _xmlNode *)arg1 tgtAnimation:(id)arg2 drawingState:(id)arg3;
+ (id)readGraphicBuild:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)readOleChartBuild:(struct _xmlNode *)arg1;
+ (id)readParagraphBuild:(struct _xmlNode *)arg1;
+ (void)readCommonTimeNodeData:(struct _xmlNode *)arg1 commonTimeNodeData:(id)arg2 drawingState:(id)arg3;

@end

