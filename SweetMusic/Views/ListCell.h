//
//  ListCell.h
//  SweetMusic
//
//  Created by 董兴斌 on 15/11/15.
//  Copyright © 2016年 董兴斌. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SongModel.h"

@interface ListCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *numLabel;
@property (weak, nonatomic) IBOutlet UILabel *songnameLabel;
@property (weak, nonatomic) IBOutlet UILabel *songerLabel;

- (void)showDataWithModel:(SongModel *)model Index:(NSInteger)index;

@end
