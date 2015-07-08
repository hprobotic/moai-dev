// Copyright (c) 2010-2011 Zipline Games, Inc. All Rights Reserved.
// http://getmoai.com

#include "pch.h"

#include <moai-sim/MOAIGfxDeviceBase.h>
#include <moai-sim/MOAIIndexBuffer.h>
#include <moai-sim/MOAIVertexArray.h>
#include <moai-sim/MOAIVertexBuffer.h>
#include <moai-sim/MOAIVertexFormat.h>

//================================================================//
// MOAIGfxDeviceBase
//================================================================//

//----------------------------------------------------------------//
void MOAIGfxDeviceBase::Draw () {

	this->mGfxRetained.Draw ( this->mGfxImmediate );
	
	this->mGfxRetained.PublishEvents ();
	this->mGfxRetained.Reset ();
}

//----------------------------------------------------------------//
MOAIGfxDeviceBase::MOAIGfxDeviceBase () :
	mGfx ( &this->mGfxImmediate ),
	mShaderDirty ( false ),
	mDrawCount ( 0 ) {
	
	this->mViewRect.Init ( 0.0f, 0.0f, 0.0f, 0.0f );
}

//----------------------------------------------------------------//
MOAIGfxDeviceBase::~MOAIGfxDeviceBase () {
}
