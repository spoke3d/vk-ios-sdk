//
//  VKUploadWallPhotoRequest.h
//
//  Copyright (c) 2013 VK.com
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy of
//  this software and associated documentation files (the "Software"), to deal in
//  the Software without restriction, including without limitation the rights to
//  use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
//  the Software, and to permit persons to whom the Software is furnished to do so,
//  subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
//  FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
//  COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
//  IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
//  CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#import "VKUploadPhotoBase.h"

/**
 Special request for upload single photo to user wall
 */
@interface VKUploadWallPhotoRequest : VKUploadPhotoBase
/**
 Initializes photo upload request with parameters
 @param image Image to upload
 @param parameters image parameters for upload
 @param userId ID of user on which wall image should be posted (or nil)
 @param groupId ID of group (without minus sign) on which wall image should be posted (or nil)
 @return Completed request for executing
 */
- (instancetype)initWithImage:(UIImage *)image parameters:(VKImageParameters *)parameters userId:(long long)userId groupId:(int)groupId;
@end