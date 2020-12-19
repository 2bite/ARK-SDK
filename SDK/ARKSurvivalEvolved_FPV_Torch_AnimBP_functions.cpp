// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FPV_Torch_AnimBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FPV_Torch_AnimBP.FPV_Torch_AnimBP_C.ExecuteUbergraph_FPV_Torch_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UFPV_Torch_AnimBP_C::ExecuteUbergraph_FPV_Torch_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FPV_Torch_AnimBP.FPV_Torch_AnimBP_C.ExecuteUbergraph_FPV_Torch_AnimBP");

	UFPV_Torch_AnimBP_C_ExecuteUbergraph_FPV_Torch_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
