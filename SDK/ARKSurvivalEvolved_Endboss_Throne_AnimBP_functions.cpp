// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Endboss_Throne_AnimBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Endboss_Throne_AnimBP.Endboss_Throne_AnimBP_C.ExecuteUbergraph_Endboss_Throne_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEndboss_Throne_AnimBP_C::ExecuteUbergraph_Endboss_Throne_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Endboss_Throne_AnimBP.Endboss_Throne_AnimBP_C.ExecuteUbergraph_Endboss_Throne_AnimBP");

	UEndboss_Throne_AnimBP_C_ExecuteUbergraph_Endboss_Throne_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif