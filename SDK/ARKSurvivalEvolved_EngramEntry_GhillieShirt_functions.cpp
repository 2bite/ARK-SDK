// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_GhillieShirt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_GhillieShirt.EngramEntry_GhillieShirt_C.ExecuteUbergraph_EngramEntry_GhillieShirt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_GhillieShirt_C::ExecuteUbergraph_EngramEntry_GhillieShirt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_GhillieShirt.EngramEntry_GhillieShirt_C.ExecuteUbergraph_EngramEntry_GhillieShirt");

	UEngramEntry_GhillieShirt_C_ExecuteUbergraph_EngramEntry_GhillieShirt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
