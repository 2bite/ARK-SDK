// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_DinoLeash_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_DinoLeash.EngramEntry_DinoLeash_C.ExecuteUbergraph_EngramEntry_DinoLeash
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_DinoLeash_C::ExecuteUbergraph_EngramEntry_DinoLeash(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_DinoLeash.EngramEntry_DinoLeash_C.ExecuteUbergraph_EngramEntry_DinoLeash");

	UEngramEntry_DinoLeash_C_ExecuteUbergraph_EngramEntry_DinoLeash_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
