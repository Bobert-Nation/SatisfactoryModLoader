// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGWallAttachmentHologram.h"
#include "FGBuildableFoundation.h"
#include "FGBuildableRailroadTrack.h"
#include "FGBuildableRoad.h"
#include "FGBuildableWall.h"

AFGWallAttachmentHologram::AFGWallAttachmentHologram() : Super() {
	this->mMaxPlacementFloorAngle = 35;
	this->mValidHitClasses.Add(AFGBuildableFoundation::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRailroadTrack::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRoad::StaticClass()); this->mValidHitClasses.Add(AFGBuildableWall::StaticClass());
	this->mUseBuildClearanceOverlapSnapp = true;
	this->bHidden = true;
	this->bReplicates = true;
}
bool AFGWallAttachmentHologram::TrySnapToActor(const FHitResult& hitResult){ return bool(); }
void AFGWallAttachmentHologram::CheckValidFloor(){ }
void AFGWallAttachmentHologram::CheckClearance(){ }
int32 AFGWallAttachmentHologram::GetRotationStep() const{ return int32(); }
