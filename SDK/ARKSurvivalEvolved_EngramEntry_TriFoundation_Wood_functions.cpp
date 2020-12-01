// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TriFoundation_Wood_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TriFoundation_Wood.EngramEntry_TriFoundation_Wood_C.ExecuteUbergraph_EngramEntry_TriFoundation_Wood
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TriFoundation_Wood_C::ExecuteUbergraph_EngramEntry_TriFoundation_Wood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TriFoundation_Wood.EngramEntry_TriFoundation_Wood_C.ExecuteUbergraph_EngramEntry_TriFoundation_Wood");

	UEngramEntry_TriFoundation_Wood_C_ExecuteUbergraph_EngramEntry_TriFoundation_Wood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
