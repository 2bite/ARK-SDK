// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Hesperornis_AnimBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Hesperornis_AnimBP.Hesperornis_AnimBP_C.ExecuteUbergraph_Hesperornis_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHesperornis_AnimBP_C::ExecuteUbergraph_Hesperornis_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hesperornis_AnimBP.Hesperornis_AnimBP_C.ExecuteUbergraph_Hesperornis_AnimBP");

	UHesperornis_AnimBP_C_ExecuteUbergraph_Hesperornis_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
