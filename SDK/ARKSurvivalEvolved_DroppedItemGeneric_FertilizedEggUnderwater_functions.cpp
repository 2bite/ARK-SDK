// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DroppedItemGeneric_FertilizedEggUnderwater_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DroppedItemGeneric_FertilizedEggUnderwater.DroppedItemGeneric_FertilizedEggUnderwater_C.UserConstructionScript
// ()

void ADroppedItemGeneric_FertilizedEggUnderwater_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_FertilizedEggUnderwater.DroppedItemGeneric_FertilizedEggUnderwater_C.UserConstructionScript");

	ADroppedItemGeneric_FertilizedEggUnderwater_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedItemGeneric_FertilizedEggUnderwater.DroppedItemGeneric_FertilizedEggUnderwater_C.ExecuteUbergraph_DroppedItemGeneric_FertilizedEggUnderwater
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADroppedItemGeneric_FertilizedEggUnderwater_C::ExecuteUbergraph_DroppedItemGeneric_FertilizedEggUnderwater(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_FertilizedEggUnderwater.DroppedItemGeneric_FertilizedEggUnderwater_C.ExecuteUbergraph_DroppedItemGeneric_FertilizedEggUnderwater");

	ADroppedItemGeneric_FertilizedEggUnderwater_C_ExecuteUbergraph_DroppedItemGeneric_FertilizedEggUnderwater_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
