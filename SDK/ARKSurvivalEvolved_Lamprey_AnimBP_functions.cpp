// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Lamprey_AnimBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Lamprey_AnimBP.Lamprey_AnimBP_C.ExecuteUbergraph_Lamprey_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULamprey_AnimBP_C::ExecuteUbergraph_Lamprey_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lamprey_AnimBP.Lamprey_AnimBP_C.ExecuteUbergraph_Lamprey_AnimBP");

	ULamprey_AnimBP_C_ExecuteUbergraph_Lamprey_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
