// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_StoneCliffPlatform_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_StoneCliffPlatform.EngramEntry_StoneCliffPlatform_C.ExecuteUbergraph_EngramEntry_StoneCliffPlatform
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_StoneCliffPlatform_C::ExecuteUbergraph_EngramEntry_StoneCliffPlatform(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_StoneCliffPlatform.EngramEntry_StoneCliffPlatform_C.ExecuteUbergraph_EngramEntry_StoneCliffPlatform");

	UEngramEntry_StoneCliffPlatform_C_ExecuteUbergraph_EngramEntry_StoneCliffPlatform_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
