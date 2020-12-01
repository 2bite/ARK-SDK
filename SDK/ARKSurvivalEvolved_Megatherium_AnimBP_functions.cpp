// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Megatherium_AnimBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Megatherium_AnimBP.Megatherium_AnimBP_C.ExecuteUbergraph_Megatherium_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMegatherium_AnimBP_C::ExecuteUbergraph_Megatherium_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megatherium_AnimBP.Megatherium_AnimBP_C.ExecuteUbergraph_Megatherium_AnimBP");

	UMegatherium_AnimBP_C_ExecuteUbergraph_Megatherium_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
