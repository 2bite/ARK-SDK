// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Saddle_SpineyLizard_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Saddle_SpineyLizard.EngramEntry_Saddle_SpineyLizard_C.ExecuteUbergraph_EngramEntry_Saddle_SpineyLizard
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Saddle_SpineyLizard_C::ExecuteUbergraph_EngramEntry_Saddle_SpineyLizard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Saddle_SpineyLizard.EngramEntry_Saddle_SpineyLizard_C.ExecuteUbergraph_EngramEntry_Saddle_SpineyLizard");

	UEngramEntry_Saddle_SpineyLizard_C_ExecuteUbergraph_EngramEntry_Saddle_SpineyLizard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
