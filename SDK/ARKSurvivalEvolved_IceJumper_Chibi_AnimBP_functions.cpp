// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IceJumper_Chibi_AnimBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IceJumper_Chibi_AnimBP.IceJumper_Chibi_AnimBP_C.ExecuteUbergraph_IceJumper_Chibi_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UIceJumper_Chibi_AnimBP_C::ExecuteUbergraph_IceJumper_Chibi_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Chibi_AnimBP.IceJumper_Chibi_AnimBP_C.ExecuteUbergraph_IceJumper_Chibi_AnimBP");

	UIceJumper_Chibi_AnimBP_C_ExecuteUbergraph_IceJumper_Chibi_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
