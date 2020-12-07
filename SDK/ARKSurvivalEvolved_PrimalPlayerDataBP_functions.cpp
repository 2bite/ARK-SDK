// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalPlayerDataBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalPlayerDataBP.PrimalPlayerDataBP_C.BPAppliedToPlayerState
// ()
// Parameters:
// class AShooterPlayerState**    ForPlayerState                 (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalPlayerDataBP_C::BPAppliedToPlayerState(class AShooterPlayerState** ForPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalPlayerDataBP.PrimalPlayerDataBP_C.BPAppliedToPlayerState");

	UPrimalPlayerDataBP_C_BPAppliedToPlayerState_Params params;
	params.ForPlayerState = ForPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalPlayerDataBP.PrimalPlayerDataBP_C.BPApplyToPlayerCharacter
// ()
// Parameters:
// class AShooterPlayerState**    ForPlayerState                 (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter**      NewPlayerCharacter             (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalPlayerDataBP_C::BPApplyToPlayerCharacter(class AShooterPlayerState** ForPlayerState, class AShooterCharacter** NewPlayerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalPlayerDataBP.PrimalPlayerDataBP_C.BPApplyToPlayerCharacter");

	UPrimalPlayerDataBP_C_BPApplyToPlayerCharacter_Params params;
	params.ForPlayerState = ForPlayerState;
	params.NewPlayerCharacter = NewPlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalPlayerDataBP.PrimalPlayerDataBP_C.ExecuteUbergraph_PrimalPlayerDataBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalPlayerDataBP_C::ExecuteUbergraph_PrimalPlayerDataBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalPlayerDataBP.PrimalPlayerDataBP_C.ExecuteUbergraph_PrimalPlayerDataBP");

	UPrimalPlayerDataBP_C_ExecuteUbergraph_PrimalPlayerDataBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
