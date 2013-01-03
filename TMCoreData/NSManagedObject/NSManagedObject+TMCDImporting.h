//
//  NSManagedObject+TMCDImporting.h
//  TMCoreData
//
//  Created by Tony Million on 04/12/2012.
//  Copyright (c) 2012 Omnityke. All rights reserved.
//

#import <CoreData/CoreData.h>

@interface NSManagedObject (TMCDImporting)

+(id)importFromDictionary:(NSDictionary*)dict inContext:(NSManagedObjectContext*)context;
+(NSArray*)importFromArray:(NSArray*)dictArray inContext:(NSManagedObjectContext*)context;

@end