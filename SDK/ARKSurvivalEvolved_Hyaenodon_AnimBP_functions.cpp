// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Hyaenodon_AnimBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Hyaenodon_AnimBP.Hyaenodon_AnimBP_C.ExecuteUbergraph_Hyaenodon_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHyaenodon_AnimBP_C::ExecuteUbergraph_Hyaenodon_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_AnimBP.Hyaenodon_AnimBP_C.ExecuteUbergraph_Hyaenodon_AnimBP");

	UHyaenodon_AnimBP_C_ExecuteUbergraph_Hyaenodon_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
