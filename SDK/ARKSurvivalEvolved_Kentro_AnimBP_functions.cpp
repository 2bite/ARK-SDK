// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Kentro_AnimBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Kentro_AnimBP.Kentro_AnimBP_C.ExecuteUbergraph_Kentro_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UKentro_AnimBP_C::ExecuteUbergraph_Kentro_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Kentro_AnimBP.Kentro_AnimBP_C.ExecuteUbergraph_Kentro_AnimBP");

	UKentro_AnimBP_C_ExecuteUbergraph_Kentro_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
