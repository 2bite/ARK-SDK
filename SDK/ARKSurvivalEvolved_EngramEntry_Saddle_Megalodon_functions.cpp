// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Saddle_Megalodon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Saddle_Megalodon.EngramEntry_Saddle_Megalodon_C.ExecuteUbergraph_EngramEntry_Saddle_Megalodon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Saddle_Megalodon_C::ExecuteUbergraph_EngramEntry_Saddle_Megalodon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Saddle_Megalodon.EngramEntry_Saddle_Megalodon_C.ExecuteUbergraph_EngramEntry_Saddle_Megalodon");

	UEngramEntry_Saddle_Megalodon_C_ExecuteUbergraph_EngramEntry_Saddle_Megalodon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
