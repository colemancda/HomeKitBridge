/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/Foundation.h>

#import "HAKAccessoryDelegate-Protocol.h"
#import "HAKConnectionDelegate-Protocol.h"

@class HAKAccessory, HAKAccessoryKeychainObject, HAKIdentifier, HAKInstanceIDPool, NSArray, NSMutableArray, NSNumber,  NSString;

@interface HAKTransport : NSObject <HAKConnectionDelegate, HAKAccessoryDelegate, NSCopying, NSCoding>
{
    NSMutableArray *_pairings;
    NSMutableArray *_accessories;
    NSMutableArray *_connections;
    BOOL _started;
    BOOL _paired;
    BOOL _allowUnencryptedConnections;
    NSString *_password;
    HAKIdentifier *_identifier;
//    id <HAKTransportDelegate> _delegate;
    NSNumber *_configurationNumber;
    NSNumber *_stateNumber;
    dispatch_queue_t _workQueue;
    HAKInstanceIDPool *_instanceIDPool;
    HAKAccessoryKeychainObject *_accessoryKey;
}

+ (id)restrictedPasswordSet;
+ (unsigned long long)maxSupportedAccessories;
+ (id)transportWithType:(unsigned long long)arg1;
@property(retain, nonatomic) HAKAccessoryKeychainObject *accessoryKey; // @synthesize accessoryKey=_accessoryKey;
@property(retain, nonatomic) HAKInstanceIDPool *instanceIDPool; // @synthesize instanceIDPool=_instanceIDPool;
@property(readonly, nonatomic) BOOL allowUnencryptedConnections; // @synthesize allowUnencryptedConnections=_allowUnencryptedConnections;
@property(retain, nonatomic) dispatch_queue_t workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic, getter=isPaired) BOOL paired; // @synthesize paired=_paired;
@property(retain, nonatomic) NSNumber *stateNumber; // @synthesize stateNumber=_stateNumber;
@property(retain, nonatomic) NSNumber *configurationNumber; // @synthesize configurationNumber=_configurationNumber;
//@property(nonatomic) __weak id <HAKTransportDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *connections; // @synthesize connections=_connections;
@property(retain, nonatomic) NSArray *pairings; // @synthesize pairings=_pairings;
@property(retain, nonatomic) NSArray *accessories; // @synthesize accessories=_accessories;

- (id)_accessoryWithInstanceID:(unsigned long long)arg1;
- (id)accessoryWithInstanceID:(unsigned long long)arg1;
- (void)removeAccessory:(id)arg1;
- (BOOL)_addAccessory:(id)arg1 error:(id *)arg2;
- (void)addAccessory:(id)arg1;
@property(readonly, nonatomic) HAKAccessory *primaryAccessory;
- (void)removeAllConnections;
- (void)removeConnection:(id)arg1;
- (void)addConnection:(id)arg1;
- (id)_pairingWithIdentifier:(id)arg1;
- (id)pairingWithIdentifier:(id)arg1;
- (void)removeAllPairings;
- (BOOL)_removePairing:(id)arg1 error:(id *)arg2;
- (BOOL)removePairing:(id)arg1 error:(id *)arg2;
- (BOOL)_addPairing:(id)arg1;
- (void)addPairing:(id)arg1;
- (void)_incrementStateNumber;
- (void)incrementStateNumber;
- (void)_incrementConfigurationNumber;
- (void)incrementConfigurationNumber;
@property(nonatomic, getter=isStarted) BOOL started; // @synthesize started=_started;
- (void)_setIdentifier:(id)arg1;
@property(copy, nonatomic) HAKIdentifier *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) unsigned long long type;
- (BOOL)updateValue:(id)arg1 forCharacteristic:(id)arg2 onSubscribedConnections:(id)arg3;
- (void)stop;
- (void)start;
- (void)_setPassword:(id)arg1;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
- (void)connectionDidEncrypt:(id)arg1;
- (void)connectionDidClose:(id)arg1;
- (void)accessory:(id)arg1 didUpdateValue:(id)arg2 forCharacteristic:(id)arg3;
- (void)accessory:(id)arg1 didUpdateService:(id)arg2;
- (void)accessory:(id)arg1 didRemoveService:(id)arg2;
- (void)accessory:(id)arg1 didAddService:(id)arg2;

- (id)initWithTransportType:(unsigned long long)arg1;

@end

