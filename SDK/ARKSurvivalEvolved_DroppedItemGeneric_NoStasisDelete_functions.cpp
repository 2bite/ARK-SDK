// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DroppedItemGeneric_NoStasisDelete_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DroppedItemGeneric_NoStasisDelete.DroppedItemGeneric_NoStasisDelete_C.UserConstructionScript
// ()

void ADroppedItemGeneric_NoStasisDelete_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_NoStasisDelete.DroppedItemGeneric_NoStasisDelete_C.UserConstructionScript");

	ADroppedItemGeneric_NoStasisDelete_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedItemGeneric_NoStasisDelete.DroppedItemGeneric_NoStasisDelete_C.ExecuteUbergraph_DroppedItemGeneric_NoStasisDelete
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADroppedItemGeneric_NoStasisDelete_C::ExecuteUbergraph_DroppedItemGeneric_NoStasisDelete(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_NoStasisDelete.DroppedItemGeneric_NoStasisDelete_C.ExecuteUbergraph_DroppedItemGeneric_NoStasisDelete");

	ADroppedItemGeneric_NoStasisDelete_C_ExecuteUbergraph_DroppedItemGeneric_NoStasisDelete_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
