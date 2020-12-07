// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_ChainSaw_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_ChainSaw.EngramEntry_ChainSaw_C.ExecuteUbergraph_EngramEntry_ChainSaw
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_ChainSaw_C::ExecuteUbergraph_EngramEntry_ChainSaw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_ChainSaw.EngramEntry_ChainSaw_C.ExecuteUbergraph_EngramEntry_ChainSaw");

	UEngramEntry_ChainSaw_C_ExecuteUbergraph_EngramEntry_ChainSaw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
