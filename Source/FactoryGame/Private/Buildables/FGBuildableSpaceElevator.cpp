// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildableSpaceElevator.h"
#include "FGPowerInfoComponent.h"
#include "FGFactoryHologram.h"

AFGBuildableSpaceElevator::AFGBuildableSpaceElevator() : Super() {
	this->mPowerConsumptionExponent = 1.60000002384186;
	this->mPowerInfoClass = UFGPowerInfoComponent::StaticClass();
	this->mMinimumProducingTime = 2;
	this->mMinimumStoppedTime = 5;
	this->mNumCyclesForProductivity = 20;
	this->mCurrentPotential = 1;
	this->mPendingPotential = 1;
	this->mMinPotential = 0.00999999977648258;
	this->mMaxPotential = 1;
	this->mMaxPotentialIncreasePerCrystal = 0.5;
	this->mFluidStackSizeDefault = EStackSize::SS_FLUID;
	this->mSignificanceRange = 18000;
	this->mHologramClass = AFGFactoryHologram::StaticClass();
	this->MaxRenderDistance = -1;
	this->mFactoryTickFunction.TickGroup = TG_PrePhysics; this->mFactoryTickFunction.EndTickGroup = TG_PrePhysics; this->mFactoryTickFunction.bTickEvenWhenPaused = false; this->mFactoryTickFunction.bCanEverTick = true; this->mFactoryTickFunction.bStartWithTickEnabled = true; this->mFactoryTickFunction.bAllowTickOnDedicatedServer = true; this->mFactoryTickFunction.TickInterval = 0;
	this->mPrimaryColor.R = -1; this->mPrimaryColor.G = -1; this->mPrimaryColor.B = -1; this->mPrimaryColor.A = 1;
	this->mSecondaryColor.R = -1; this->mSecondaryColor.G = -1; this->mSecondaryColor.B = -1; this->mSecondaryColor.A = 1;
	this->mDismantleEffectClassName = FSoftClassPath("/Game/FactoryGame/Buildable/Factory/-Shared/BP_MaterialEffect_Dismantle.BP_MaterialEffect_Dismantle_C");
	this->mBuildEffectClassName = FSoftClassPath("/Game/FactoryGame/Buildable/Factory/-Shared/BP_MaterialEffect_Build.BP_MaterialEffect_Build_C");
	this->mHighlightParticleClassName = FSoftClassPath("/Game/FactoryGame/Buildable/-Shared/Particle/NewBuildingPing.NewBuildingPing_C");
	this->PrimaryActorTick.TickGroup = TG_PrePhysics; this->PrimaryActorTick.EndTickGroup = TG_PrePhysics; this->PrimaryActorTick.bTickEvenWhenPaused = false; this->PrimaryActorTick.bCanEverTick = true; this->PrimaryActorTick.bStartWithTickEnabled = true; this->PrimaryActorTick.bAllowTickOnDedicatedServer = true; this->PrimaryActorTick.TickInterval = 0;
	this->bReplicates = true;
	this->NetCullDistanceSquared = 5624999936;
}
void AFGBuildableSpaceElevator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGBuildableSpaceElevator::BeginPlay(){ }
void AFGBuildableSpaceElevator::Dismantle_Implementation(){ }
void AFGBuildableSpaceElevator::Factory_CollectInput_Implementation(){ }
void AFGBuildableSpaceElevator::Factory_Tick(float dt){ }
bool AFGBuildableSpaceElevator::IsFullyUpgraded(){ return bool(); }
void AFGBuildableSpaceElevator::GetNextPhaseCost(TArray< FItemAmount >& out_cost){ }
void AFGBuildableSpaceElevator::PayOffFromInventory(UFGInventoryComponent* inventory, int32 inventorySlotIndex){ }
bool AFGBuildableSpaceElevator::IsReadyToUpgrade(){ return bool(); }
void AFGBuildableSpaceElevator::UpgradeTowTruck_Implementation(){ }
void AFGBuildableSpaceElevator::LaunchTowTruck_Implementation(){ }
AFGGamePhaseManager* AFGBuildableSpaceElevator::GetGamePhaseManager(){ return nullptr; }
void AFGBuildableSpaceElevator::ConsumeInputIngredientsIfNecessary(){ }
