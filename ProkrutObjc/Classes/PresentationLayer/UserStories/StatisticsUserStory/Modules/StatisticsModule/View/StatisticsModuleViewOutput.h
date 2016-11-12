//
//  StatisticsModuleStatisticsModuleViewOutput.h
//  Prokrut
//
//  Created by k.zinovyev on 02/09/2016.
//  Copyright © 2016 Rambler&Co. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AllUserStats;

@protocol StatisticsModuleViewOutput <NSObject>

/**
 @author k.zinovyev

 Метод сообщает презентеру о том, что view готова к работе
 */
- (void)didTriggerViewReadyEvent;
- (void)didTriggerPullToRefreshEvent;
- (NSArray *)obtainStatisticsFilteredWithTerm:(NSString *)term;

/**
 @author Artem Karpushin
 
 Оповещает презентер о том, что был выбран игрок 
 */
- (void)didSelectPlayerWithStats:(AllUserStats *)stats;

@end
