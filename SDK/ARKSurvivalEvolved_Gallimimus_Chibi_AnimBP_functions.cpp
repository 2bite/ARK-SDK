// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Gallimimus_Chibi_AnimBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Gallimimus_Chibi_AnimBP.Gallimimus_Chibi_AnimBP_C.ExecuteUbergraph_Gallimimus_Chibi_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGallimimus_Chibi_AnimBP_C::ExecuteUbergraph_Gallimimus_Chibi_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gallimimus_Chibi_AnimBP.Gallimimus_Chibi_AnimBP_C.ExecuteUbergraph_Gallimimus_Chibi_AnimBP");

	UGallimimus_Chibi_AnimBP_C_ExecuteUbergraph_Gallimimus_Chibi_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
