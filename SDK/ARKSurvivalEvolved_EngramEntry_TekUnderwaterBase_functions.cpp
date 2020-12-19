// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TekUnderwaterBase_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TekUnderwaterBase.EngramEntry_TekUnderwaterBase_C.ExecuteUbergraph_EngramEntry_TekUnderwaterBase
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TekUnderwaterBase_C::ExecuteUbergraph_EngramEntry_TekUnderwaterBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TekUnderwaterBase.EngramEntry_TekUnderwaterBase_C.ExecuteUbergraph_EngramEntry_TekUnderwaterBase");

	UEngramEntry_TekUnderwaterBase_C_ExecuteUbergraph_EngramEntry_TekUnderwaterBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
