// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LanternGoat_Chibi_AnimBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LanternGoat_Chibi_AnimBP.LanternGoat_Chibi_AnimBP_C.ExecuteUbergraph_LanternGoat_Chibi_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULanternGoat_Chibi_AnimBP_C::ExecuteUbergraph_LanternGoat_Chibi_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternGoat_Chibi_AnimBP.LanternGoat_Chibi_AnimBP_C.ExecuteUbergraph_LanternGoat_Chibi_AnimBP");

	ULanternGoat_Chibi_AnimBP_C_ExecuteUbergraph_LanternGoat_Chibi_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
