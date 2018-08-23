//
//  RTCFactory.h
//  GJJanus
//
//  Created by melot on 2018/4/3.
//  Copyright © 2018年 MirrorUncle. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WebRTC/WebRTC.h>

@interface RTCFactory : NSObject

@property(nonatomic,retain,readonly)RTCPeerConnectionFactory* peerConnectionFactory;

+(instancetype)shareFactory;
@end
