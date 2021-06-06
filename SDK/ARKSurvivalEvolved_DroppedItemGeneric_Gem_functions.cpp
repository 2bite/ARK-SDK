// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DroppedItemGeneric_Gem_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DroppedItemGeneric_Gem.DroppedItemGeneric_Gem_C.BPPostInitializeComponents
// ()

void ADroppedItemGeneric_Gem_C::BPPostInitializeComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_Gem.DroppedItemGeneric_Gem_C.BPPostInitializeComponents");

	ADroppedItemGeneric_Gem_C_BPPostInitializeComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedItemGeneric_Gem.DroppedItemGeneric_Gem_C.UserConstructionScript
// ()

void ADroppedItemGeneric_Gem_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_Gem.DroppedItemGeneric_Gem_C.UserConstructionScript");

	ADroppedItemGeneric_Gem_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedItemGeneric_Gem.DroppedItemGeneric_Gem_C.ExecuteUbergraph_DroppedItemGeneric_Gem
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADroppedItemGeneric_Gem_C::ExecuteUbergraph_DroppedItemGeneric_Gem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_Gem.DroppedItemGeneric_Gem_C.ExecuteUbergraph_DroppedItemGeneric_Gem");

	ADroppedItemGeneric_Gem_C_ExecuteUbergraph_DroppedItemGeneric_Gem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
