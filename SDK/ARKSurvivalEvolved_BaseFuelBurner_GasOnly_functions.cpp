// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BaseFuelBurner_GasOnly_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BaseFuelBurner_GasOnly.BaseFuelBurner_GasOnly_C.NotifyCraftingFinished
// ()

void ABaseFuelBurner_GasOnly_C::NotifyCraftingFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseFuelBurner_GasOnly.BaseFuelBurner_GasOnly_C.NotifyCraftingFinished");

	ABaseFuelBurner_GasOnly_C_NotifyCraftingFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseFuelBurner_GasOnly.BaseFuelBurner_GasOnly_C.UserConstructionScript
// ()

void ABaseFuelBurner_GasOnly_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseFuelBurner_GasOnly.BaseFuelBurner_GasOnly_C.UserConstructionScript");

	ABaseFuelBurner_GasOnly_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseFuelBurner_GasOnly.BaseFuelBurner_GasOnly_C.ExecuteUbergraph_BaseFuelBurner_GasOnly
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABaseFuelBurner_GasOnly_C::ExecuteUbergraph_BaseFuelBurner_GasOnly(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseFuelBurner_GasOnly.BaseFuelBurner_GasOnly_C.ExecuteUbergraph_BaseFuelBurner_GasOnly");

	ABaseFuelBurner_GasOnly_C_ExecuteUbergraph_BaseFuelBurner_GasOnly_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
