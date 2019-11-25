//
//  mediakit_manager.cpp
//  MediaKit
//
//  Created by xiewei on 2019/7/1.
//

#include "mediakit_manager.h"
MK_BEGIN
MediaKitManager::MediaKitManager() {
    
}

int MediaKitManager::init() {
    if (mLooper == nullptr) {
        mLooper = new MKThread("looper");
    }
    mLooper->open();
    return 0;
}
MK_END
