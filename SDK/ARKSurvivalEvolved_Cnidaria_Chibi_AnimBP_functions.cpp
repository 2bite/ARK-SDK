// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Cnidaria_Chibi_AnimBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Cnidaria_Chibi_AnimBP.Cnidaria_Chibi_AnimBP_C.ExecuteUbergraph_Cnidaria_Chibi_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCnidaria_Chibi_AnimBP_C::ExecuteUbergraph_Cnidaria_Chibi_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cnidaria_Chibi_AnimBP.Cnidaria_Chibi_AnimBP_C.ExecuteUbergraph_Cnidaria_Chibi_AnimBP");

	UCnidaria_Chibi_AnimBP_C_ExecuteUbergraph_Cnidaria_Chibi_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
