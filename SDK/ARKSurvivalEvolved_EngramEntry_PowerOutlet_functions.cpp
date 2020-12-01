// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_PowerOutlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_PowerOutlet.EngramEntry_PowerOutlet_C.ExecuteUbergraph_EngramEntry_PowerOutlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_PowerOutlet_C::ExecuteUbergraph_EngramEntry_PowerOutlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_PowerOutlet.EngramEntry_PowerOutlet_C.ExecuteUbergraph_EngramEntry_PowerOutlet");

	UEngramEntry_PowerOutlet_C_ExecuteUbergraph_EngramEntry_PowerOutlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
