//
//  TSCalendarUnitDayCell.h
//  TS_Calendar
//
//  Created by zq on 16/4/11.
//  Copyright © 2016年 zhangqiang. All rights reserved.
//

#import "TSC_Constants.h"
#import "TSC_DaySelectableLabel.h"
#import "TSCommonModel.h"
#import <UIKit/UIKit.h>

@interface TSCalendarUnitDayCell : UICollectionViewCell

//=================== 样式 =====================
@property (nonatomic, assign) TSCalendarDaysLayoutType dayLayoutType; //单天的布局样式
@property (nonatomic, retain) UIColor *dayTitleColor,
    *daySubTitleColor, //如：阴历，有无事件，天气等
    *daySelectedTitleColor,
    *daySelectedSubTitleColor,
    *daySelectedBackgroundColor,
    *dayBackgroundColor;
@property (nonatomic, retain) UIColor *modTitleColor, *modBackgroundColor; //月份中不可点击的dayView的字体颜色和背景色
@property (nonatomic, assign) BOOL isShowDayBorderLine; //是否显示边框
@property (nonatomic, retain) UIColor* borderLineColor; //边框颜色
//=============================================
@property (nonatomic, assign) int sufaceYear, sufaceMonth, sufaceDay;
@property (nonatomic, retain) TSCalendarUnitDateModel* unitDateModel;
//============================================
@property (nonatomic, assign) BOOL isTSC_UnitDayViewSelected; //是否选中（选中后变色）
@property (nonatomic, retain) TSC_DaySelectableLabel *dayLabel, *lunarDayLabel;
@property (nonatomic, assign) TSCalendarDaySelectedBGType daySelectBGType;

- (void)resetModelAndDateShowText;

@end
