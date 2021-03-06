//
//  ChallengesRootController.h
//  ChallengeApp
//
//  Created by MCS on 9/13/15.
//  Copyright (c) 2015 MCS. All rights reserved.
//

#import "MasterRootController.h"
#import "ChallengesTableViewController.h"
#import "ChallengeDao.h"


typedef NS_ENUM(NSUInteger, ChallengeTableViewControllerContent) {
    //    the integer values must have a correspondence with the tab items tags on NestedTabViewController.
    AllChallenges = 6,
    PopularChallenges = 7,
    RecentChallenges = 8,
    SearchChallenges = 9,
    UserIncompleteChallenges = 2,
    UserChallengeInvitation = 3,
    UserCompleteChallenges = 4
};

@interface ChallengesRootController : MasterRootController<ChallengeDelegate>
@property ChallengeTableViewControllerContent contentType;
@property ChallengeDao * challengeDao;
@property NSArray * challengesArray;
@end
