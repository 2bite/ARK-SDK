// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_GhilliePants_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_GhilliePants.EngramEntry_GhilliePants_C.ExecuteUbergraph_EngramEntry_GhilliePants
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_GhilliePants_C::ExecuteUbergraph_EngramEntry_GhilliePants(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_GhilliePants.EngramEntry_GhilliePants_C.ExecuteUbergraph_EngramEntry_GhilliePants");

	UEngramEntry_GhilliePants_C_ExecuteUbergraph_EngramEntry_GhilliePants_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
