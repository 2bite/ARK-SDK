// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_TekShield_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_TekShield.PrimalInventoryBP_TekShield_C.BPRemoteInventoryAllowViewing
// ()
// Parameters:
// class AShooterPlayerController** PC                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalInventoryBP_TekShield_C::BPRemoteInventoryAllowViewing(class AShooterPlayerController** PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TekShield.PrimalInventoryBP_TekShield_C.BPRemoteInventoryAllowViewing");

	UPrimalInventoryBP_TekShield_C_BPRemoteInventoryAllowViewing_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalInventoryBP_TekShield.PrimalInventoryBP_TekShield_C.ExecuteUbergraph_PrimalInventoryBP_TekShield
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_TekShield_C::ExecuteUbergraph_PrimalInventoryBP_TekShield(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TekShield.PrimalInventoryBP_TekShield_C.ExecuteUbergraph_PrimalInventoryBP_TekShield");

	UPrimalInventoryBP_TekShield_C_ExecuteUbergraph_PrimalInventoryBP_TekShield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
