// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DroppedItemGeneric_FertilizedEgg_NoPhysics_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DroppedItemGeneric_FertilizedEgg_NoPhysics.DroppedItemGeneric_FertilizedEgg_NoPhysics_C.UserConstructionScript
// ()

void ADroppedItemGeneric_FertilizedEgg_NoPhysics_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_FertilizedEgg_NoPhysics.DroppedItemGeneric_FertilizedEgg_NoPhysics_C.UserConstructionScript");

	ADroppedItemGeneric_FertilizedEgg_NoPhysics_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedItemGeneric_FertilizedEgg_NoPhysics.DroppedItemGeneric_FertilizedEgg_NoPhysics_C.ExecuteUbergraph_DroppedItemGeneric_FertilizedEgg_NoPhysics
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADroppedItemGeneric_FertilizedEgg_NoPhysics_C::ExecuteUbergraph_DroppedItemGeneric_FertilizedEgg_NoPhysics(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_FertilizedEgg_NoPhysics.DroppedItemGeneric_FertilizedEgg_NoPhysics_C.ExecuteUbergraph_DroppedItemGeneric_FertilizedEgg_NoPhysics");

	ADroppedItemGeneric_FertilizedEgg_NoPhysics_C_ExecuteUbergraph_DroppedItemGeneric_FertilizedEgg_NoPhysics_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
