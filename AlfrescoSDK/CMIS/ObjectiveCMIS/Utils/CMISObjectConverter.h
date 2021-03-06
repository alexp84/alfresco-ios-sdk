/*
  Licensed to the Apache Software Foundation (ASF) under one
  or more contributor license agreements.  See the NOTICE file
  distributed with this work for additional information
  regarding copyright ownership.  The ASF licenses this file
  to you under the Apache License, Version 2.0 (the
  "License"); you may not use this file except in compliance
  with the License.  You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing,
  software distributed under the License is distributed on an
  "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
  KIND, either express or implied.  See the License for the
  specific language governing permissions and limitations
  under the License.
 */

#import <Foundation/Foundation.h>
#import "CMISObject.h"
#import "CMISObjectData.h"

@class CMISSession;

@interface CMISObjectConverter : NSObject

- (id)initWithSession:(CMISSession *)session;

- (void)convertObject:(CMISObjectData *)objectData completionBlock:(void (^)(CMISObject *object, NSError *error))completionBlock;
- (void)convertObjects:(NSArray *)objectDatas completionBlock:(void (^)(NSArray *objects, NSError *error))completionBlock;

/**
 * Converts the given dictionary of properties, where the key is the property id and the value
 * can be a CMISPropertyData or a regular string.
 */
- (void)convertProperties:(NSDictionary *)properties 
          forObjectTypeId:(NSString *)objectTypeId 
          completionBlock:(void (^)(CMISProperties *convertedProperties, NSError *error))completionBlock;

/**
 * Converts the source to an array with elements of type CMISExtensionElement. Elements of the source with keys that are contained in the cmisKeys set set are ignored.
 */
+ (NSArray *)convertExtensions:(NSDictionary *)source cmisKeys:(NSSet *)cmisKeys;

@end
