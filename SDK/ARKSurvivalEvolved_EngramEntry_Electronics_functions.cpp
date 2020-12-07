// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Electronics_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Electronics.EngramEntry_Electronics_C.ExecuteUbergraph_EngramEntry_Electronics
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Electronics_C::ExecuteUbergraph_EngramEntry_Electronics(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Electronics.EngramEntry_Electronics_C.ExecuteUbergraph_EngramEntry_Electronics");

	UEngramEntry_Electronics_C_ExecuteUbergraph_EngramEntry_Electronics_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
