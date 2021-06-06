// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Paintbrush_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Paintbrush.EngramEntry_Paintbrush_C.ExecuteUbergraph_EngramEntry_Paintbrush
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Paintbrush_C::ExecuteUbergraph_EngramEntry_Paintbrush(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Paintbrush.EngramEntry_Paintbrush_C.ExecuteUbergraph_EngramEntry_Paintbrush");

	UEngramEntry_Paintbrush_C_ExecuteUbergraph_EngramEntry_Paintbrush_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
