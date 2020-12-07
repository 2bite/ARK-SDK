// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_WoodRoof_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_WoodRoof.EngramEntry_WoodRoof_C.ExecuteUbergraph_EngramEntry_WoodRoof
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_WoodRoof_C::ExecuteUbergraph_EngramEntry_WoodRoof(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_WoodRoof.EngramEntry_WoodRoof_C.ExecuteUbergraph_EngramEntry_WoodRoof");

	UEngramEntry_WoodRoof_C_ExecuteUbergraph_EngramEntry_WoodRoof_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
