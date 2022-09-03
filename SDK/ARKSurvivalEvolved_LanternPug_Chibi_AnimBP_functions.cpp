// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LanternPug_Chibi_AnimBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LanternPug_Chibi_AnimBP.LanternPug_Chibi_AnimBP_C.ExecuteUbergraph_LanternPug_Chibi_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULanternPug_Chibi_AnimBP_C::ExecuteUbergraph_LanternPug_Chibi_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPug_Chibi_AnimBP.LanternPug_Chibi_AnimBP_C.ExecuteUbergraph_LanternPug_Chibi_AnimBP");

	ULanternPug_Chibi_AnimBP_C_ExecuteUbergraph_LanternPug_Chibi_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
