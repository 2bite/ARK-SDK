// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateFlyerGrab_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackStateFlyerGrab.DinoAttackStateFlyerGrab_C.ExecuteUbergraph_DinoAttackStateFlyerGrab
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateFlyerGrab_C::ExecuteUbergraph_DinoAttackStateFlyerGrab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateFlyerGrab.DinoAttackStateFlyerGrab_C.ExecuteUbergraph_DinoAttackStateFlyerGrab");

	UDinoAttackStateFlyerGrab_C_ExecuteUbergraph_DinoAttackStateFlyerGrab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
