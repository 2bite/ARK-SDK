// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TekTrapdoor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TekTrapdoor.EngramEntry_TekTrapdoor_C.ExecuteUbergraph_EngramEntry_TekTrapdoor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TekTrapdoor_C::ExecuteUbergraph_EngramEntry_TekTrapdoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TekTrapdoor.EngramEntry_TekTrapdoor_C.ExecuteUbergraph_EngramEntry_TekTrapdoor");

	UEngramEntry_TekTrapdoor_C_ExecuteUbergraph_EngramEntry_TekTrapdoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
