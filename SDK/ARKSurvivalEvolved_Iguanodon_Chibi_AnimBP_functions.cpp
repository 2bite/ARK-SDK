// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Iguanodon_Chibi_AnimBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Iguanodon_Chibi_AnimBP.Iguanodon_Chibi_AnimBP_C.ExecuteUbergraph_Iguanodon_Chibi_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UIguanodon_Chibi_AnimBP_C::ExecuteUbergraph_Iguanodon_Chibi_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Iguanodon_Chibi_AnimBP.Iguanodon_Chibi_AnimBP_C.ExecuteUbergraph_Iguanodon_Chibi_AnimBP");

	UIguanodon_Chibi_AnimBP_C_ExecuteUbergraph_Iguanodon_Chibi_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
