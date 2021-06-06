// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Pliers_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Pliers.EngramEntry_Pliers_C.ExecuteUbergraph_EngramEntry_Pliers
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Pliers_C::ExecuteUbergraph_EngramEntry_Pliers(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Pliers.EngramEntry_Pliers_C.ExecuteUbergraph_EngramEntry_Pliers");

	UEngramEntry_Pliers_C_ExecuteUbergraph_EngramEntry_Pliers_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
