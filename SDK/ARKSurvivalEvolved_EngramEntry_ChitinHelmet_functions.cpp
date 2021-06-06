// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_ChitinHelmet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_ChitinHelmet.EngramEntry_ChitinHelmet_C.ExecuteUbergraph_EngramEntry_ChitinHelmet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_ChitinHelmet_C::ExecuteUbergraph_EngramEntry_ChitinHelmet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_ChitinHelmet.EngramEntry_ChitinHelmet_C.ExecuteUbergraph_EngramEntry_ChitinHelmet");

	UEngramEntry_ChitinHelmet_C_ExecuteUbergraph_EngramEntry_ChitinHelmet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
