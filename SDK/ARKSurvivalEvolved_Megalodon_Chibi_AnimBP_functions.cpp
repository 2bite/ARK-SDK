// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Megalodon_Chibi_AnimBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Megalodon_Chibi_AnimBP.Megalodon_Chibi_AnimBP_C.ExecuteUbergraph_Megalodon_Chibi_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMegalodon_Chibi_AnimBP_C::ExecuteUbergraph_Megalodon_Chibi_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalodon_Chibi_AnimBP.Megalodon_Chibi_AnimBP_C.ExecuteUbergraph_Megalodon_Chibi_AnimBP");

	UMegalodon_Chibi_AnimBP_C_ExecuteUbergraph_Megalodon_Chibi_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
