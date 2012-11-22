/*
 ******************************************************************************
 * Copyright (C) 2005-2012 Alfresco Software Limited.
 *
 * This file is part of the Alfresco Mobile SDK.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *****************************************************************************
 */

#import <Foundation/Foundation.h>
#import "AlfrescoErrors.h"
#import "AlfrescoSession.h"
#import "AlfrescoAuthenticationProvider.h"
#import <objc/runtime.h>
#import "AlfrescoInternalConstants.h"

@interface AlfrescoHTTPUtils : NSObject

+ (void)executeRequestWithURL:(NSURL *)url
                      session:(id<AlfrescoSession>)session
              completionBlock:(AlfrescoDataCompletionBlock)completionBlock;

+ (void)executeRequestWithURL:(NSURL *)url
                      session:(id<AlfrescoSession>)session
                       method:(NSString *)method
              completionBlock:(AlfrescoDataCompletionBlock)completionBlock;


+ (void)executeRequestWithURL:(NSURL *)url
                      session:(id<AlfrescoSession>)session
                  requestBody:(NSData *)requestBody
                       method:(NSString *)method
              completionBlock:(AlfrescoDataCompletionBlock)completionBlock;


+ (NSURL *)buildURLFromBaseURLString:(NSString *)baseURL extensionURL:(NSString *)extensionURL;

@end
