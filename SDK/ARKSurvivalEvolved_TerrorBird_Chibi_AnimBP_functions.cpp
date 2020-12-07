// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TerrorBird_Chibi_AnimBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TerrorBird_Chibi_AnimBP.TerrorBird_Chibi_AnimBP_C.ExecuteUbergraph_TerrorBird_Chibi_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTerrorBird_Chibi_AnimBP_C::ExecuteUbergraph_TerrorBird_Chibi_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrorBird_Chibi_AnimBP.TerrorBird_Chibi_AnimBP_C.ExecuteUbergraph_TerrorBird_Chibi_AnimBP");

	UTerrorBird_Chibi_AnimBP_C_ExecuteUbergraph_TerrorBird_Chibi_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
