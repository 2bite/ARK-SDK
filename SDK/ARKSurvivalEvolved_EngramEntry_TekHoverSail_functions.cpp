// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TekHoverSail_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TekHoverSail.EngramEntry_TekHoverSail_C.ExecuteUbergraph_EngramEntry_TekHoverSail
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TekHoverSail_C::ExecuteUbergraph_EngramEntry_TekHoverSail(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TekHoverSail.EngramEntry_TekHoverSail_C.ExecuteUbergraph_EngramEntry_TekHoverSail");

	UEngramEntry_TekHoverSail_C_ExecuteUbergraph_EngramEntry_TekHoverSail_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
