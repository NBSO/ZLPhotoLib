//
//  PickerPhoto.h
//  ZLAssetsPickerDemo
//
//  Created by 张磊 on 14-11-15.
//  Copyright (c) 2014年 com.zixue101.www. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AssetsLibrary/AssetsLibrary.h>
@interface ZLPickerBrowserPhoto : NSObject

// 保存相册模型
@property (nonatomic , strong) ALAsset *asset;
/**
 *  URL地址
 */
@property (nonatomic , strong) NSURL *photoURL;
/**
 *  原图
 */
@property (nonatomic , strong) UIImage *photoImage;
/**
 *  缩略图
 */
@property (nonatomic , strong) UIImage *thumbImage;

@end
