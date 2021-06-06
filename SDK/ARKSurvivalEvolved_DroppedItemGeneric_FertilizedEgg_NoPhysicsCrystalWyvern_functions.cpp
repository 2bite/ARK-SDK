// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DroppedItemGeneric_FertilizedEgg_NoPhysicsCrystalWyvern_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DroppedItemGeneric_FertilizedEgg_NoPhysicsCrystalWyvern.DroppedItemGeneric_FertilizedEgg_NoPhysicsCrystalWyvern_C.UserConstructionScript
// ()

void ADroppedItemGeneric_FertilizedEgg_NoPhysicsCrystalWyvern_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_FertilizedEgg_NoPhysicsCrystalWyvern.DroppedItemGeneric_FertilizedEgg_NoPhysicsCrystalWyvern_C.UserConstructionScript");

	ADroppedItemGeneric_FertilizedEgg_NoPhysicsCrystalWyvern_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedItemGeneric_FertilizedEgg_NoPhysicsCrystalWyvern.DroppedItemGeneric_FertilizedEgg_NoPhysicsCrystalWyvern_C.ExecuteUbergraph_DroppedItemGeneric_FertilizedEgg_NoPhysicsCrystalWyvern
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADroppedItemGeneric_FertilizedEgg_NoPhysicsCrystalWyvern_C::ExecuteUbergraph_DroppedItemGeneric_FertilizedEgg_NoPhysicsCrystalWyvern(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_FertilizedEgg_NoPhysicsCrystalWyvern.DroppedItemGeneric_FertilizedEgg_NoPhysicsCrystalWyvern_C.ExecuteUbergraph_DroppedItemGeneric_FertilizedEgg_NoPhysicsCrystalWyvern");

	ADroppedItemGeneric_FertilizedEgg_NoPhysicsCrystalWyvern_C_ExecuteUbergraph_DroppedItemGeneric_FertilizedEgg_NoPhysicsCrystalWyvern_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
