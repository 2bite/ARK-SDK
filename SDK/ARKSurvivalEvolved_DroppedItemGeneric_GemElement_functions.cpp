// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DroppedItemGeneric_GemElement_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DroppedItemGeneric_GemElement.DroppedItemGeneric_GemElement_C.UserConstructionScript
// ()

void ADroppedItemGeneric_GemElement_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_GemElement.DroppedItemGeneric_GemElement_C.UserConstructionScript");

	ADroppedItemGeneric_GemElement_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedItemGeneric_GemElement.DroppedItemGeneric_GemElement_C.ExecuteUbergraph_DroppedItemGeneric_GemElement
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADroppedItemGeneric_GemElement_C::ExecuteUbergraph_DroppedItemGeneric_GemElement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_GemElement.DroppedItemGeneric_GemElement_C.ExecuteUbergraph_DroppedItemGeneric_GemElement");

	ADroppedItemGeneric_GemElement_C_ExecuteUbergraph_DroppedItemGeneric_GemElement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
