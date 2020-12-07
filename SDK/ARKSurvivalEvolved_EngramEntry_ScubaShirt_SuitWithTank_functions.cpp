// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_ScubaShirt_SuitWithTank_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_ScubaShirt_SuitWithTank.EngramEntry_ScubaShirt_SuitWithTank_C.ExecuteUbergraph_EngramEntry_ScubaShirt_SuitWithTank
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_ScubaShirt_SuitWithTank_C::ExecuteUbergraph_EngramEntry_ScubaShirt_SuitWithTank(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_ScubaShirt_SuitWithTank.EngramEntry_ScubaShirt_SuitWithTank_C.ExecuteUbergraph_EngramEntry_ScubaShirt_SuitWithTank");

	UEngramEntry_ScubaShirt_SuitWithTank_C_ExecuteUbergraph_EngramEntry_ScubaShirt_SuitWithTank_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
