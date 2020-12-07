// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DroppedItemGeneric_MinionElement_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DroppedItemGeneric_MinionElement.DroppedItemGeneric_MinionElement_C.BPPostInitializeComponents
// ()

void ADroppedItemGeneric_MinionElement_C::BPPostInitializeComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_MinionElement.DroppedItemGeneric_MinionElement_C.BPPostInitializeComponents");

	ADroppedItemGeneric_MinionElement_C_BPPostInitializeComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedItemGeneric_MinionElement.DroppedItemGeneric_MinionElement_C.UserConstructionScript
// ()

void ADroppedItemGeneric_MinionElement_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_MinionElement.DroppedItemGeneric_MinionElement_C.UserConstructionScript");

	ADroppedItemGeneric_MinionElement_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedItemGeneric_MinionElement.DroppedItemGeneric_MinionElement_C.ExecuteUbergraph_DroppedItemGeneric_MinionElement
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADroppedItemGeneric_MinionElement_C::ExecuteUbergraph_DroppedItemGeneric_MinionElement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_MinionElement.DroppedItemGeneric_MinionElement_C.ExecuteUbergraph_DroppedItemGeneric_MinionElement");

	ADroppedItemGeneric_MinionElement_C_ExecuteUbergraph_DroppedItemGeneric_MinionElement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
