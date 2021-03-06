/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOPlaceSearchResponse, NSMutableArray;

@interface GEOETAResponse : PBCodable <NSCopying> {
    struct { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } *_problemDetails;
    unsigned long long _problemDetailsCount;
    unsigned long long _problemDetailsSpace;
    NSMutableArray *_etaResults;
    GEOPlaceSearchResponse *_originPlaceSearchResponse;
    int _status;
    struct { 
        unsigned int status : 1; 
    } _has;
}

@property bool hasStatus;
@property int status;
@property(retain) NSMutableArray * etaResults;
@property(readonly) bool hasOriginPlaceSearchResponse;
@property(retain) GEOPlaceSearchResponse * originPlaceSearchResponse;
@property(readonly) unsigned long long problemDetailsCount;
@property(readonly) struct { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }* problemDetails;


- (bool)hasStatus;
- (id)originPlaceSearchResponse;
- (id)etaResults;
- (bool)hasOriginPlaceSearchResponse;
- (id)etaResultAtIndex:(unsigned long long)arg1;
- (void)clearEtaResults;
- (unsigned long long)etaResultsCount;
- (void)addEtaResult:(id)arg1;
- (void)setOriginPlaceSearchResponse:(id)arg1;
- (void)setEtaResults:(id)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setProblemDetails:(struct { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)arg1 count:(unsigned long long)arg2;
- (struct { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)problemDetails;
- (void)addProblemDetail:(struct { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })arg1;
- (struct { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })problemDetailAtIndex:(unsigned long long)arg1;
- (unsigned long long)problemDetailsCount;
- (void)clearProblemDetails;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
