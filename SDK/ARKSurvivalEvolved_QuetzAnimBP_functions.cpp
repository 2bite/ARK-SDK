// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_QuetzAnimBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function QuetzAnimBP.QuetzAnimBP_C.ExecuteUbergraph_QuetzAnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UQuetzAnimBP_C::ExecuteUbergraph_QuetzAnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuetzAnimBP.QuetzAnimBP_C.ExecuteUbergraph_QuetzAnimBP");

	UQuetzAnimBP_C_ExecuteUbergraph_QuetzAnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
