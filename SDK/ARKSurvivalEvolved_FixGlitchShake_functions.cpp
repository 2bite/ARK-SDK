// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FixGlitchShake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FixGlitchShake.FixGlitchShake_C.ExecuteUbergraph_FixGlitchShake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UFixGlitchShake_C::ExecuteUbergraph_FixGlitchShake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FixGlitchShake.FixGlitchShake_C.ExecuteUbergraph_FixGlitchShake");

	UFixGlitchShake_C_ExecuteUbergraph_FixGlitchShake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
