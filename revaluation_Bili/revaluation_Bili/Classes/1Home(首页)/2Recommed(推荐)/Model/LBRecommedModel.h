//
//  LBRecommedModel.h
//  Bili
//
//  Created by 林彬 on 16/5/7.
//  Copyright © 2016年 gl. All rights reserved.
//

#import <Foundation/Foundation.h>
@class LBBodyModel;
@interface LBRecommedModel : NSObject

/** title【头部标题】 */
@property(nonatomic , strong)NSDictionary *head;
/** 4个collectionView的cell或者是其他数据 */
@property(nonatomic , strong)NSArray *body;
/** 用于判断cell类型 */
@property(nonatomic , strong)NSString *type;

/** 当前多少人在直播 */
@property(nonatomic , assign) NSString *count;

/** cell的高度 */
@property(nonatomic , assign) CGFloat cellHeight;

/** 里面的数据 */
@property(nonatomic , strong)LBBodyModel *bodyItem;

@end
