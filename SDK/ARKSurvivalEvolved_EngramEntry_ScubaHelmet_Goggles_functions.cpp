// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_ScubaHelmet_Goggles_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_ScubaHelmet_Goggles.EngramEntry_ScubaHelmet_Goggles_C.ExecuteUbergraph_EngramEntry_ScubaHelmet_Goggles
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_ScubaHelmet_Goggles_C::ExecuteUbergraph_EngramEntry_ScubaHelmet_Goggles(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_ScubaHelmet_Goggles.EngramEntry_ScubaHelmet_Goggles_C.ExecuteUbergraph_EngramEntry_ScubaHelmet_Goggles");

	UEngramEntry_ScubaHelmet_Goggles_C_ExecuteUbergraph_EngramEntry_ScubaHelmet_Goggles_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
