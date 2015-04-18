//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKModelObject.h>

#import "GEOExperimentConfigurationObserver.h"
#import "GEOResourceManifestTileGroupObserver.h"
#import "VKLabelModelDelegate.h"
#import "VKOverlayContainerDelegate.h"
#import "VKPolylineGroupOverlayObserver.h"
#import "VKTileProviderClient.h"

@class GEOFeatureStyleAttributes, GEOResourceManifestConfiguration, NSArray, NSLocale, NSMapTable, NSMutableArray, NSMutableSet, NSSet, NSString, VKAnimation, VKAnnotationMarker, VKAnnotationModel, VKBuildingFootprintMapModel, VKDebugModel, VKGridModel, VKHybridRasterMapModel, VKLabelMarker, VKLabelModel, VKMapRasterizer, VKMercatorTerrainHeightCache, VKOverlayContainerModel, VKPolygonMapModel, VKPolylineOverlay, VKPolylineOverlayPainter, VKRasterMapModel, VKRasterOverlayMapModel, VKRasterOverlayTileSource, VKRasterTrafficMapModel, VKRealisticMapModel, VKRiverMapModel, VKRoadMapModel, VKRoadTrafficMapModel, VKSharedResources, VKSkyModel, VKStyleManager, VKTileProvider, VKTrafficTileSource;

@interface VKMapModel : VKModelObject <VKOverlayContainerDelegate, VKLabelModelDelegate, GEOResourceManifestTileGroupObserver, GEOExperimentConfigurationObserver, VKTileProviderClient, VKPolylineGroupOverlayObserver>
{
    unsigned int _mapPurpose;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    NSLocale *_locale;
    int _tileSize;
    VKTileProvider *_tileProviders[4];
    VKTileProvider *_rasterOverlayProvider[2];
    int _mapMode;
    int _desiredMapMode;
    BOOL _transitioningToNav;
    GEOResourceManifestConfiguration *_additionalManifestConfiguration;
    char _activeMapLayers[4][34];
    NSMapTable *_layerToSourceMaps[4];
    VKTrafficTileSource *_trafficSource;
    VKRasterOverlayTileSource *_rasterOverlayTileSource[2];
    VKGridModel *_gridModel;
    VKSkyModel *_skyModel;
    VKLabelModel *_labelModel;
    VKRasterMapModel *_rasterModel;
    VKHybridRasterMapModel *_hybridRasterModel;
    VKRasterMapModel *_standardRasterModel;
    VKRiverMapModel *_riverLineModel;
    VKRasterTrafficMapModel *_rasterTrafficModel;
    VKPolygonMapModel *_polygonModel;
    VKRoadMapModel *_roadModel;
    VKRoadMapModel *_hybridRoadModel;
    VKRoadTrafficMapModel *_roadTrafficModel;
    VKRealisticMapModel *_realisticModel;
    VKBuildingFootprintMapModel *_buildingFootprintModel;
    VKAnnotationModel *_annotationModel;
    VKOverlayContainerModel *_overlayContainerModel;
    VKRasterOverlayMapModel *_rasterOverlayModel[2];
    VKDebugModel *_debugModel;
    NSMapTable *_tileSources;
    NSMutableArray *_drawOrder;
    NSMutableArray *_mapLayerSubmodels;
    NSMutableArray *_mapTileSubmodels;
    VKStyleManager *_activeStyleManager;
    VKStyleManager *_defaultStyleManager;
    VKStyleManager *_hybridStyleManager;
    VKStyleManager *_satelliteStyleManager;
    double _zoomLevel;
    int _mapType;
    id <VKMapModelDelegate> _delegate;
    id <GEORoutePreloadSession> _routePreloadSession;
    BOOL _dynamicMapModesEnabled;
    BOOL _debugDynamicMapModesEnabled;
    BOOL _buildingsAreVisible;
    BOOL _showsBuildings;
    BOOL _fullyDrawn;
    BOOL _shouldNotifyFullyDrawn;
    BOOL _hasFailedTile;
    BOOL _trafficEnabled;
    BOOL _shouldRasterize;
    int _loadingCount;
    float _contentScale;
    int _targetDisplay;
    double _lodBias;
    BOOL _disableRoads;
    BOOL _disableLabels;
    BOOL _disablePolygons;
    BOOL _disableBuildingFootprints;
    BOOL _disableRasters;
    BOOL _disableGrid;
    Matrix_5173352a _clearColor;
    VKMapRasterizer *_rasterizer;
    VKRasterMapModel *_rasterViewer;
    int _annotationMarkerStyle;
    BOOL _limitingNavCameraHeight;
    NSMutableSet *_blockingStylesheetObservers;
    float _styleTransitionProgress;
    NSMutableArray *_externalAnchors;
    double _forcedMaxZoomLevel;
    VKAnimation *_modeTransitionAnimation;
    char _disableRoadClass[9];
    id <VKMapModeObserver> _mapModeObserver;
    VKSharedResources *_sharedResources;
    float _navigationPuckSize;
    struct ClearItem _clearItem;
    GEOFeatureStyleAttributes *_mapFeatureStyleAttributes;
    shared_ptr_6e6219d6 _styleQuery;
    int _metroArea;
    BOOL _forceMapDrawStyleUpdate;
    NSMutableSet *_polylineOverlays;
    VKPolylineOverlay *_selectedPolyline;
}

+ (unsigned long)numberOfRoadClasses;
+ (const char *)nameForRoadClass:(int)arg1;
@property(nonatomic) BOOL limitingNavCameraHeight; // @synthesize limitingNavCameraHeight=_limitingNavCameraHeight;
@property(nonatomic) float navigationPuckSize; // @synthesize navigationPuckSize=_navigationPuckSize;
@property(readonly, nonatomic) BOOL buildingsAreVisible; // @synthesize buildingsAreVisible=_buildingsAreVisible;
@property(readonly, nonatomic) VKBuildingFootprintMapModel *buildingFootprintModel; // @synthesize buildingFootprintModel=_buildingFootprintModel;
- (int)maximumZoomLevelInView:(id)arg1;
- (int)minimumZoomLevelInView:(id)arg1;
@property(nonatomic) id <VKOverlayContainerRouteDelegate> overlayContainerRouteDelegate;
- (void)polylineGroup:(id)arg1 didSelectPolyline:(id)arg2;
- (void)didStopLoadingTilesWithError:(id)arg1;
- (void)willStartLoadingTiles;
- (void)tileProviderNeedsUpdate:(id)arg1;
- (BOOL)tileProviderMayUseNetwork:(id)arg1;
- (void)experimentConfigurationDidChange:(id)arg1;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)labelModel:(id)arg1 selectedLabelMarkerWillDisappear:(id)arg2;
- (id)labelModel:(id)arg1 mapTileForTile:(id)arg2 layer:(unsigned long long)arg3;
- (void)overlayContainer:(id)arg1 showingRouteInStandardModeDidChange:(BOOL)arg2;
- (BOOL)overlayContainerIsInRealisticMode:(id)arg1;
- (id)overlayContainer:(id)arg1 roadTileForTile:(id)arg2;
- (id)overlayContainer:(id)arg1 painterForOverlay:(id)arg2;
- (id)labelDebugString;
- (void)polylineGroup:(id)arg1 didRemovePolyline:(id)arg2;
- (void)polylineGroup:(id)arg1 didAddPolyline:(id)arg2;
- (void)_updateTileExclusionAreas;
- (id)_rasterOverlayTileSourceForLevel:(unsigned int)arg1;
- (void)updateMapDrawStyleWithContext:(id)arg1;
- (void)updateRasterOverlayProviders:(id)arg1 withContext:(id)arg2;
@property(readonly, nonatomic) VKTileProvider *tileProvider;
- (void)_tryTransitionAndPreloadIfNecessary:(id)arg1;
- (void)_updateZoomLevel:(id)arg1;
- (double)maxTileHeightAtPoint:(struct VKPoint)arg1;
- (void)foreachActiveLayer:(CDUnknownBlockType)arg1;
- (void)didTapZoom;
- (void)willTapZoom;
- (void)_localeChanged:(id)arg1;
- (void)shouldFlushCaches:(id)arg1;
@property(nonatomic) double lodBias;
- (void)performstylesheetDidReload;
- (float)ppi;
- (float)_tileSelectionScale;
- (void)_forceLayout;
- (void)_updateOverlayTileSource;
- (void)_updateRegularTileProviderMode;
- (void)performStylesheetDoneChanging;
- (void)performStylesheetTransitionDidProgress;
- (void)performStylesheetWillTransitionToDisplayStyle:(unsigned int)arg1;
- (void)performStylesheetDidChange;
@property(nonatomic) Matrix_5173352a clearColor; // @synthesize clearColor=_clearColor;
- (void)_setStyleManagerFromMapType:(int)arg1;
- (void)_mapConfigurationDidChange;
- (void)createTrafficTileSourceIfNecessary:(id)arg1;
- (id)sourceForLayer:(unsigned long long)arg1 mode:(int)arg2;
- (id)createSourceForLayer:(unsigned long long)arg1 tileSet:(id)arg2 mode:(int)arg3;
- (id)tileSetForMapLayer:(unsigned long long)arg1 tileGroup:(id)arg2;
- (int)tileStyleForMapLayer:(unsigned long long)arg1;
- (void)configureTileSources;
- (void)_deactivateModel:(id)arg1;
- (void)_activateModel:(id)arg1;
- (int)buildingsMapMode;
- (void)_transitionFromMode:(int)arg1 toMode:(int)arg2 animated:(BOOL)arg3;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue *)arg3;
- (void)debugHighlightLabelAtScreenPoint:(struct CGPoint)arg1 viewTransform:(id)arg2;
- (id)annotationMarkerForSelectionAtPoint:(struct VKPoint)arg1 avoidCurrent:(BOOL)arg2 canvasSize:(struct CGSize)arg3;
- (void)gatherNavigationRenderingPreloadItems:(vector_b35310ee *)arg1;
- (id)navTileSource;
- (void)didBeginTransitionToNavigation;
- (void)didEndNavigation;
- (double)heightAtPoint:(struct VKPoint)arg1;
- (void)layoutScene:(id)arg1 withContext:(id)arg2;
@property(readonly, nonatomic) int currentMapMode; // @synthesize currentMapMode=_mapMode;
- (void)flushCaches:(BOOL)arg1;
@property(readonly, nonatomic) VKMercatorTerrainHeightCache *terrainHeightCache;
- (void)addSubmodel:(id)arg1;
- (id)initShouldRasterize:(BOOL)arg1 mapPurpose:(unsigned int)arg2 tileGroupIdentifier:(unsigned int)arg3 locale:(id)arg4 contentScale:(float)arg5;
@property(nonatomic) unsigned int neighborMode;
@property(readonly, nonatomic) VKSharedResources *sharedResources; // @synthesize sharedResources=_sharedResources;
- (void)setStylesheetMapDisplayStyle:(unsigned int)arg1;
@property(nonatomic, getter=isTrafficEnabled) BOOL trafficEnabled; // @synthesize trafficEnabled=_trafficEnabled;
@property(retain, nonatomic) GEOResourceManifestConfiguration *additionalManifestConfiguration; // @synthesize additionalManifestConfiguration=_additionalManifestConfiguration;
@property(nonatomic) BOOL debugDynamicMapModesEnabled; // @synthesize debugDynamicMapModesEnabled=_debugDynamicMapModesEnabled;
@property(nonatomic) BOOL disableGrid; // @synthesize disableGrid=_disableGrid;
@property(nonatomic) BOOL disableRealisticLand;
@property(nonatomic) BOOL disableRealisticRoads;
@property(nonatomic) BOOL disableRasters; // @synthesize disableRasters=_disableRasters;
@property(nonatomic) BOOL disableBuildingFootprints; // @synthesize disableBuildingFootprints=_disableBuildingFootprints;
@property(nonatomic) BOOL disablePolygons; // @synthesize disablePolygons=_disablePolygons;
@property(readonly, nonatomic) BOOL isFullyDrawn;
- (BOOL)isRoadClassDisabled:(int)arg1;
- (void)disableRoadClass:(BOOL)arg1 withRoadClass:(int)arg2;
- (void)forceMapType:(int)arg1;
@property(retain, nonatomic) VKPolylineOverlayPainter *focusedLabelsPolylinePainter;
- (void)setCurrentLocationText:(id)arg1;
- (void)insertRasterOverlay:(id)arg1 belowOverlay:(id)arg2;
- (void)insertRasterOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)removeRasterOverlay:(id)arg1;
- (void)addRasterOverlay:(id)arg1;
- (id)labelMarkers;
@property(readonly, nonatomic) VKLabelMarker *selectedLabelMarker;
- (void)deselectAnnotationMarker:(id)arg1;
- (void)selectLabelMarker:(id)arg1;
- (id)labelMarkerForSelectionAtPoint:(struct CGPoint)arg1 selectableLabelsOnly:(BOOL)arg2;
@property(retain, nonatomic) id <GEORoutePreloadSession> routePreloadSession;
- (void)_setStyleTransitionProgress:(float)arg1 targetStyle:(unsigned int)arg2 step:(int)arg3;
- (float)_styleTransitionProgress;
- (void)requestStylesheetAnimation:(id)arg1 targetMapDisplayStyle:(unsigned int)arg2 setupHandler:(CDUnknownBlockType)arg3;
- (void)stylesheetAnimationDidProgress:(float)arg1;
- (void)stylesheetAnimationWillStartFromStyle:(unsigned int)arg1 toStyle:(unsigned int)arg2;
- (void)resetTileContainers;
- (void)stylesheetAnimationDidEnd:(BOOL)arg1;
@property(nonatomic) BOOL disableRoads; // @synthesize disableRoads=_disableRoads;
@property(nonatomic) BOOL disableLabels; // @synthesize disableLabels=_disableLabels;
- (void)addExternalAnchor:(id)arg1;
- (void)removeExternalAnchor:(id)arg1;
- (id)externalAnchors;
- (void)deselectLabelMarker;
@property(nonatomic) id <VKRouteMatchedAnnotationPresentation> routeLineSplitAnnotation;
- (void)addOverlay:(id)arg1;
- (void)removeOverlay:(id)arg1;
@property(readonly, nonatomic) NSArray *overlays;
- (void)addPersistentOverlay:(id)arg1;
- (void)removePersistentOverlay:(id)arg1;
@property(readonly, nonatomic) NSSet *persistentOverlays;
- (void)selectAnnotationMarker:(id)arg1;
- (void)addAnnotationMarker:(id)arg1 allowAnimation:(BOOL)arg2;
- (void)removeAnnotationMarker:(id)arg1;
@property(readonly, nonatomic) VKAnnotationMarker *selectedAnnotationMarker;
- (void)setAnnotationMarkerDeselectionCallback:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)annotationMarkerDeselectionCallback;
@property(retain, nonatomic) NSArray *externalTrafficIncidents;
@property(nonatomic) struct PolylineCoordinate routeUserOffset;
- (id)annotationMarkers;
@property(nonatomic) BOOL dynamicMapModesEnabled; // @synthesize dynamicMapModesEnabled=_dynamicMapModesEnabled;
- (void)setDesiredMapMode:(int)arg1 immediate:(BOOL)arg2;
@property(nonatomic) BOOL showsBuildings; // @synthesize showsBuildings=_showsBuildings;
@property(nonatomic) BOOL showsPointsOfInterest;
@property(nonatomic) int shieldIdiom;
@property(nonatomic) int navigationShieldSize;
@property(nonatomic) int shieldSize;
- (id)detailedDescription;
@property(nonatomic) BOOL shouldLoadFallbackTiles;
- (void)clearScene;
@property(nonatomic) int mapType; // @synthesize mapType=_mapType;
@property(nonatomic) int labelScaleFactor;
@property(nonatomic) BOOL localizeLabels;
- (void)cancelTileRequests;
@property(nonatomic) int targetDisplay;
- (void)reloadStylesheet;
@property(retain, nonatomic) VKStyleManager *styleManager; // @synthesize styleManager=_activeStyleManager;
- (BOOL)isShowingNoDataPlaceholders;
- (id)attributionsForCurrentRegion;
@property(readonly, nonatomic) NSArray *visibleTileSets;
@property(nonatomic) BOOL labelMarkerSelectionEnabled;
- (void)setApplicationState:(unsigned int)arg1;
- (void)_resetMaximumZoomLevel;
- (void)_setMaximumZoomLevel:(double)arg1;
- (CDUnknownBlockType)annotationCoordinateTest;
- (CDUnknownBlockType)annotationRectTest;
- (void).cxx_destruct;
@property(nonatomic) float contentScale; // @synthesize contentScale=_contentScale;
- (int)tileSize;
- (void)didReceiveMemoryWarning:(BOOL)arg1;
- (id).cxx_construct;
@property(nonatomic) id <VKMapModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

