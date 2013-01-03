//
//  TMCoreData.h
//  TMCoreData
//
//  Created by Tony Million on 02/12/2012.
//  Copyright (c) 2012 Omnityke. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "NSManagedObjectContext+TMCDSaving.h"

#import "NSManagedObject+TMCDCreation.h"
#import "NSManagedObject+TMCDFetching.h"

#import "NSManagedObject+TMCDFinding.h"
#import "NSManagedObject+TMCDFetchedResults.h"

#import "NSManagedObject+TMCDExporting.h"
#import "NSManagedObject+TMCDImporting.h"

@interface TMCoreData : NSObject

@property(readonly, nonatomic) NSManagedObjectContext       *primaryContext;
@property(readonly, nonatomic) NSManagedObjectContext       *mainThreadContext;

-(id)initWithLocalStoreNamed:(NSString*)name;
-(id)initWithLocalStoreNamed:(NSString*)localStore objectModel:(NSManagedObjectModel*)objectModel;

-(id)initWithiCloudContainer:(NSString *)icloudBucket localStoreNamed:(NSString *)localStore;

-(NSManagedObjectContext*)scratchContext;

-(void)saveInBackgroundWithBlock:(void(^)(NSManagedObjectContext *localContext))block;
-(void)saveInBackgroundWithBlock:(void(^)(NSManagedObjectContext *localContext))block completion:(void(^)(void))completion;

-(void)resetPersistentStore;

@end