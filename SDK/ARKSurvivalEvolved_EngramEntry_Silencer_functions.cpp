// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Silencer_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Silencer.EngramEntry_Silencer_C.ExecuteUbergraph_EngramEntry_Silencer
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Silencer_C::ExecuteUbergraph_EngramEntry_Silencer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Silencer.EngramEntry_Silencer_C.ExecuteUbergraph_EngramEntry_Silencer");

	UEngramEntry_Silencer_C_ExecuteUbergraph_EngramEntry_Silencer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
