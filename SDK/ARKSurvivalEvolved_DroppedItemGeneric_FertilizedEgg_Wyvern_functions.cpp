// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DroppedItemGeneric_FertilizedEgg_Wyvern_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DroppedItemGeneric_FertilizedEgg_Wyvern.DroppedItemGeneric_FertilizedEgg_Wyvern_C.UserConstructionScript
// ()

void ADroppedItemGeneric_FertilizedEgg_Wyvern_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_FertilizedEgg_Wyvern.DroppedItemGeneric_FertilizedEgg_Wyvern_C.UserConstructionScript");

	ADroppedItemGeneric_FertilizedEgg_Wyvern_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedItemGeneric_FertilizedEgg_Wyvern.DroppedItemGeneric_FertilizedEgg_Wyvern_C.ExecuteUbergraph_DroppedItemGeneric_FertilizedEgg_Wyvern
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADroppedItemGeneric_FertilizedEgg_Wyvern_C::ExecuteUbergraph_DroppedItemGeneric_FertilizedEgg_Wyvern(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_FertilizedEgg_Wyvern.DroppedItemGeneric_FertilizedEgg_Wyvern_C.ExecuteUbergraph_DroppedItemGeneric_FertilizedEgg_Wyvern");

	ADroppedItemGeneric_FertilizedEgg_Wyvern_C_ExecuteUbergraph_DroppedItemGeneric_FertilizedEgg_Wyvern_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
