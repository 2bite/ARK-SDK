// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_MinersHelmet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_MinersHelmet.EngramEntry_MinersHelmet_C.ExecuteUbergraph_EngramEntry_MinersHelmet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_MinersHelmet_C::ExecuteUbergraph_EngramEntry_MinersHelmet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_MinersHelmet.EngramEntry_MinersHelmet_C.ExecuteUbergraph_EngramEntry_MinersHelmet");

	UEngramEntry_MinersHelmet_C_ExecuteUbergraph_EngramEntry_MinersHelmet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
