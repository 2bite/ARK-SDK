// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_RiotShield_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_RiotShield.EngramEntry_RiotShield_C.ExecuteUbergraph_EngramEntry_RiotShield
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_RiotShield_C::ExecuteUbergraph_EngramEntry_RiotShield(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_RiotShield.EngramEntry_RiotShield_C.ExecuteUbergraph_EngramEntry_RiotShield");

	UEngramEntry_RiotShield_C_ExecuteUbergraph_EngramEntry_RiotShield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
