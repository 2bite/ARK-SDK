// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_GhillieHelmet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_GhillieHelmet.EngramEntry_GhillieHelmet_C.ExecuteUbergraph_EngramEntry_GhillieHelmet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_GhillieHelmet_C::ExecuteUbergraph_EngramEntry_GhillieHelmet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_GhillieHelmet.EngramEntry_GhillieHelmet_C.ExecuteUbergraph_EngramEntry_GhillieHelmet");

	UEngramEntry_GhillieHelmet_C_ExecuteUbergraph_EngramEntry_GhillieHelmet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
