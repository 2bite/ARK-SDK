// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Saddle_Iguanodon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Saddle_Iguanodon.EngramEntry_Saddle_Iguanodon_C.ExecuteUbergraph_EngramEntry_Saddle_Iguanodon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Saddle_Iguanodon_C::ExecuteUbergraph_EngramEntry_Saddle_Iguanodon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Saddle_Iguanodon.EngramEntry_Saddle_Iguanodon_C.ExecuteUbergraph_EngramEntry_Saddle_Iguanodon");

	UEngramEntry_Saddle_Iguanodon_C_ExecuteUbergraph_EngramEntry_Saddle_Iguanodon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
