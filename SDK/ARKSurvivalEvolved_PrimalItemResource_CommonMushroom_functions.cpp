// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_CommonMushroom_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_CommonMushroom.PrimalItemResource_CommonMushroom_C.AddImmunity
// ()

void UPrimalItemResource_CommonMushroom_C::AddImmunity()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_CommonMushroom.PrimalItemResource_CommonMushroom_C.AddImmunity");

	UPrimalItemResource_CommonMushroom_C_AddImmunity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemResource_CommonMushroom.PrimalItemResource_CommonMushroom_C.BlueprintUsed
// ()

void UPrimalItemResource_CommonMushroom_C::BlueprintUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_CommonMushroom.PrimalItemResource_CommonMushroom_C.BlueprintUsed");

	UPrimalItemResource_CommonMushroom_C_BlueprintUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemResource_CommonMushroom.PrimalItemResource_CommonMushroom_C.ExecuteUbergraph_PrimalItemResource_CommonMushroom
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_CommonMushroom_C::ExecuteUbergraph_PrimalItemResource_CommonMushroom(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_CommonMushroom.PrimalItemResource_CommonMushroom_C.ExecuteUbergraph_PrimalItemResource_CommonMushroom");

	UPrimalItemResource_CommonMushroom_C_ExecuteUbergraph_PrimalItemResource_CommonMushroom_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
