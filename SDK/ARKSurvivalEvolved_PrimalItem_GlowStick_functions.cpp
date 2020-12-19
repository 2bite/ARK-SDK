// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_GlowStick_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_GlowStick.PrimalItem_GlowStick_C.BPPostInitializeItem
// ()
// Parameters:
// class UWorld**                 OptionalInitWorld              (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_GlowStick_C::BPPostInitializeItem(class UWorld** OptionalInitWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_GlowStick.PrimalItem_GlowStick_C.BPPostInitializeItem");

	UPrimalItem_GlowStick_C_BPPostInitializeItem_Params params;
	params.OptionalInitWorld = OptionalInitWorld;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_GlowStick.PrimalItem_GlowStick_C.BPItemBroken
// ()

void UPrimalItem_GlowStick_C::BPItemBroken()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_GlowStick.PrimalItem_GlowStick_C.BPItemBroken");

	UPrimalItem_GlowStick_C_BPItemBroken_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_GlowStick.PrimalItem_GlowStick_C.ExecuteUbergraph_PrimalItem_GlowStick
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_GlowStick_C::ExecuteUbergraph_PrimalItem_GlowStick(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_GlowStick.PrimalItem_GlowStick_C.ExecuteUbergraph_PrimalItem_GlowStick");

	UPrimalItem_GlowStick_C_ExecuteUbergraph_PrimalItem_GlowStick_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
