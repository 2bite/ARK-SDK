// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DroppedItemGeneric_FertilizedEgg_CrystalWyvern_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DroppedItemGeneric_FertilizedEgg_CrystalWyvern.DroppedItemGeneric_FertilizedEgg_CrystalWyvern_C.UserConstructionScript
// ()

void ADroppedItemGeneric_FertilizedEgg_CrystalWyvern_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_FertilizedEgg_CrystalWyvern.DroppedItemGeneric_FertilizedEgg_CrystalWyvern_C.UserConstructionScript");

	ADroppedItemGeneric_FertilizedEgg_CrystalWyvern_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedItemGeneric_FertilizedEgg_CrystalWyvern.DroppedItemGeneric_FertilizedEgg_CrystalWyvern_C.ExecuteUbergraph_DroppedItemGeneric_FertilizedEgg_CrystalWyvern
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADroppedItemGeneric_FertilizedEgg_CrystalWyvern_C::ExecuteUbergraph_DroppedItemGeneric_FertilizedEgg_CrystalWyvern(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_FertilizedEgg_CrystalWyvern.DroppedItemGeneric_FertilizedEgg_CrystalWyvern_C.ExecuteUbergraph_DroppedItemGeneric_FertilizedEgg_CrystalWyvern");

	ADroppedItemGeneric_FertilizedEgg_CrystalWyvern_C_ExecuteUbergraph_DroppedItemGeneric_FertilizedEgg_CrystalWyvern_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
