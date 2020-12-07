// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_TekTransmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_TekTransmitter.PrimalInventoryBP_TekTransmitter_C.BPRemoteInventoryAllowViewing
// ()
// Parameters:
// class AShooterPlayerController** PC                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalInventoryBP_TekTransmitter_C::BPRemoteInventoryAllowViewing(class AShooterPlayerController** PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TekTransmitter.PrimalInventoryBP_TekTransmitter_C.BPRemoteInventoryAllowViewing");

	UPrimalInventoryBP_TekTransmitter_C_BPRemoteInventoryAllowViewing_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalInventoryBP_TekTransmitter.PrimalInventoryBP_TekTransmitter_C.ExecuteUbergraph_PrimalInventoryBP_TekTransmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_TekTransmitter_C::ExecuteUbergraph_PrimalInventoryBP_TekTransmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TekTransmitter.PrimalInventoryBP_TekTransmitter_C.ExecuteUbergraph_PrimalInventoryBP_TekTransmitter");

	UPrimalInventoryBP_TekTransmitter_C_ExecuteUbergraph_PrimalInventoryBP_TekTransmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
