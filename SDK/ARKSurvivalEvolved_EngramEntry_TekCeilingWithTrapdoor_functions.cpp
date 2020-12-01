// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TekCeilingWithTrapdoor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TekCeilingWithTrapdoor.EngramEntry_TekCeilingWithTrapdoor_C.ExecuteUbergraph_EngramEntry_TekCeilingWithTrapdoor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TekCeilingWithTrapdoor_C::ExecuteUbergraph_EngramEntry_TekCeilingWithTrapdoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TekCeilingWithTrapdoor.EngramEntry_TekCeilingWithTrapdoor_C.ExecuteUbergraph_EngramEntry_TekCeilingWithTrapdoor");

	UEngramEntry_TekCeilingWithTrapdoor_C_ExecuteUbergraph_EngramEntry_TekCeilingWithTrapdoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
