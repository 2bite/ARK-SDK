// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_MachinedPistol_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_MachinedPistol.EngramEntry_MachinedPistol_C.ExecuteUbergraph_EngramEntry_MachinedPistol
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_MachinedPistol_C::ExecuteUbergraph_EngramEntry_MachinedPistol(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_MachinedPistol.EngramEntry_MachinedPistol_C.ExecuteUbergraph_EngramEntry_MachinedPistol");

	UEngramEntry_MachinedPistol_C_ExecuteUbergraph_EngramEntry_MachinedPistol_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
