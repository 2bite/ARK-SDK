// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TekPistol_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TekPistol.EngramEntry_TekPistol_C.ExecuteUbergraph_EngramEntry_TekPistol
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TekPistol_C::ExecuteUbergraph_EngramEntry_TekPistol(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TekPistol.EngramEntry_TekPistol_C.ExecuteUbergraph_EngramEntry_TekPistol");

	UEngramEntry_TekPistol_C_ExecuteUbergraph_EngramEntry_TekPistol_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
