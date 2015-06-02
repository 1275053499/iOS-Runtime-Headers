/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComposedWaypoint : PBCodable <NSCopying> {
    GEOLatLng *_latLng;
    GEOMapItemStorage *_mapItemStorage;
    GEOWaypointTyped *_waypoint;
}

@property (nonatomic, readonly) BOOL hasLatLng;
@property (nonatomic, readonly) BOOL hasMapItemStorage;
@property (nonatomic, readonly) BOOL hasWaypoint;
@property (nonatomic, retain) GEOLatLng *latLng;
@property (nonatomic, retain) GEOMapItemStorage *mapItemStorage;
@property (nonatomic, retain) GEOWaypointTyped *waypoint;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (id)composedWaypointForAddressString:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(id /* block */)arg4 networkActivityHandler:(id /* block */)arg5;
+ (id)composedWaypointForCoordinate:(struct { double x1; double x2; })arg1 addressDictionary:(id)arg2 placeName:(id)arg3 traits:(id)arg4 completionHandler:(id /* block */)arg5 networkActivityHandler:(id /* block */)arg6;
+ (id)composedWaypointForCurrentLocation:(id)arg1 traits:(id)arg2 completionHandler:(id /* block */)arg3 networkActivityHandler:(id /* block */)arg4;
+ (void)composedWaypointForID:(unsigned long long)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(id /* block */)arg4 networkActivityHandler:(id /* block */)arg5;
+ (id)composedWaypointForIncompleteMapItem:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(id /* block */)arg4 networkActivityHandler:(id /* block */)arg5;
+ (id)composedWaypointForLocation:(id)arg1 mapItem:(id)arg2 traits:(id)arg3 completionHandler:(id /* block */)arg4 networkActivityHandler:(id /* block */)arg5;
+ (id)composedWaypointForMapItem:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(id /* block */)arg4 networkActivityHandler:(id /* block */)arg5;
+ (id)composedWaypointForMapItemToRefine:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(id /* block */)arg4 networkActivityHandler:(id /* block */)arg5;
+ (void)composedWaypointForMapServiceResponse:(id)arg1 clientAttributes:(id)arg2 error:(id)arg3 handler:(id /* block */)arg4;
+ (id)composedWaypointForSearchString:(id)arg1 completionItem:(id)arg2 traits:(id)arg3 clientAttributes:(id)arg4 completionHandler:(id /* block */)arg5 networkActivityHandler:(id /* block */)arg6;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)geoMapItem;
- (BOOL)hasLatLng;
- (BOOL)hasMapItemStorage;
- (BOOL)hasWaypoint;
- (unsigned int)hash;
- (id)initWithLocation:(id)arg1 isCurrentLocation:(BOOL)arg2;
- (id)initWithMapItem:(id)arg1;
- (BOOL)isCurrentLocation;
- (BOOL)isEqual:(id)arg1;
- (id)latLng;
- (id)mapItemStorage;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setIsCurrentLocation:(BOOL)arg1;
- (void)setLatLng:(id)arg1;
- (void)setMapItemStorage:(id)arg1;
- (void)setWaypoint:(id)arg1;
- (id)timezone;
- (id)waypoint;
- (void)writeTo:(id)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (void)composedWaypointForMapItem:(id)arg1 forQuickETA:(BOOL)arg2 completionHandler:(id /* block */)arg3 networkActivityHandler:(id /* block */)arg4;

@end