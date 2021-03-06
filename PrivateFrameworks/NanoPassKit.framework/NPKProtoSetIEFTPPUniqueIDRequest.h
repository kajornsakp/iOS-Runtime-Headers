/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoSetIEFTPPUniqueIDRequest : PBRequest <NSCopying> {
    NSString * _applicationIdentifier;
    BOOL  _cancelOutstandingRequests;
    struct { 
        unsigned int cancelOutstandingRequests : 1; 
        unsigned int requestAuthorization : 1; 
    }  _has;
    BOOL  _requestAuthorization;
    NSString * _uniqueID;
}

@property (nonatomic, retain) NSString *applicationIdentifier;
@property (nonatomic) BOOL cancelOutstandingRequests;
@property (nonatomic, readonly) BOOL hasApplicationIdentifier;
@property (nonatomic) BOOL hasCancelOutstandingRequests;
@property (nonatomic) BOOL hasRequestAuthorization;
@property (nonatomic, readonly) BOOL hasUniqueID;
@property (nonatomic) BOOL requestAuthorization;
@property (nonatomic, retain) NSString *uniqueID;

- (void).cxx_destruct;
- (id)applicationIdentifier;
- (BOOL)cancelOutstandingRequests;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasApplicationIdentifier;
- (BOOL)hasCancelOutstandingRequests;
- (BOOL)hasRequestAuthorization;
- (BOOL)hasUniqueID;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (BOOL)requestAuthorization;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setCancelOutstandingRequests:(BOOL)arg1;
- (void)setHasCancelOutstandingRequests:(BOOL)arg1;
- (void)setHasRequestAuthorization:(BOOL)arg1;
- (void)setRequestAuthorization:(BOOL)arg1;
- (void)setUniqueID:(id)arg1;
- (id)uniqueID;
- (void)writeTo:(id)arg1;

@end
