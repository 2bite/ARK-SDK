// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_RefinedShards_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_RefinedShards.EngramEntry_RefinedShards_C.ExecuteUbergraph_EngramEntry_RefinedShards
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_RefinedShards_C::ExecuteUbergraph_EngramEntry_RefinedShards(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_RefinedShards.EngramEntry_RefinedShards_C.ExecuteUbergraph_EngramEntry_RefinedShards");

	UEngramEntry_RefinedShards_C_ExecuteUbergraph_EngramEntry_RefinedShards_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
