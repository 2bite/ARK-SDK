// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_GhillieGloves_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_GhillieGloves.EngramEntry_GhillieGloves_C.ExecuteUbergraph_EngramEntry_GhillieGloves
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_GhillieGloves_C::ExecuteUbergraph_EngramEntry_GhillieGloves(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_GhillieGloves.EngramEntry_GhillieGloves_C.ExecuteUbergraph_EngramEntry_GhillieGloves");

	UEngramEntry_GhillieGloves_C_ExecuteUbergraph_EngramEntry_GhillieGloves_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
