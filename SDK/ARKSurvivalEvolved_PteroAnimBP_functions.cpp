// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PteroAnimBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PteroAnimBP.PteroAnimBP_C.ExecuteUbergraph_PteroAnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPteroAnimBP_C::ExecuteUbergraph_PteroAnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PteroAnimBP.PteroAnimBP_C.ExecuteUbergraph_PteroAnimBP");

	UPteroAnimBP_C_ExecuteUbergraph_PteroAnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
