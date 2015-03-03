//
//  HVWPic.h
//  HVWWeibo
//
//  Created by hellovoidworld on 15/2/5.
//  Copyright (c) 2015年 hellovoidworld. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HVWPic : NSObject

/** 缩略图片地址，没有时不返回此字段 */
@property(nonatomic, copy) NSString *thumbnail_pic;

/** 中等图片 */
@property(nonatomic, copy) NSString *bmiddle_pic;

@end
