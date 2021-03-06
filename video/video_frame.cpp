//
//  video_frame_base.cpp
//  Pods
//
//  Created by xiewei on 2019/11/27.
//

#include "video_frame.h"
MK_BEGIN

BVideoFrame::~BVideoFrame() {
    
}

void BVideoFrame::Release() {
    delete this;
}

int BVideoFrame::targetWidth() const {
    if (mTargetWidth == -1) {
        return width();
    }
    return mTargetWidth;
}

int BVideoFrame::targetHeight() const{
    if (mTargetHeight == -1) {
        return height();
    }
    return mTargetHeight;
}

void BVideoFrame::setTargetSize(int width, int height) {
    mTargetWidth = width;
    mTargetHeight = height;
}

MKVideoFrameType BVideoFrame::GetType() const {
    return mType;
}
MK_END

