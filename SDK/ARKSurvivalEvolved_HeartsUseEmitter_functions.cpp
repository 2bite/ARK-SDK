// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HeartsUseEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HeartsUseEmitter.HeartsUseEmitter_C.UserConstructionScript
// ()

void AHeartsUseEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeartsUseEmitter.HeartsUseEmitter_C.UserConstructionScript");

	AHeartsUseEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeartsUseEmitter.HeartsUseEmitter_C.ExecuteUbergraph_HeartsUseEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AHeartsUseEmitter_C::ExecuteUbergraph_HeartsUseEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeartsUseEmitter.HeartsUseEmitter_C.ExecuteUbergraph_HeartsUseEmitter");

	AHeartsUseEmitter_C_ExecuteUbergraph_HeartsUseEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
