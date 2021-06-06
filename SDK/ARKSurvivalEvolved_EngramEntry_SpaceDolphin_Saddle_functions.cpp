// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_SpaceDolphin_Saddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_SpaceDolphin_Saddle.EngramEntry_SpaceDolphin_Saddle_C.ExecuteUbergraph_EngramEntry_SpaceDolphin_Saddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_SpaceDolphin_Saddle_C::ExecuteUbergraph_EngramEntry_SpaceDolphin_Saddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_SpaceDolphin_Saddle.EngramEntry_SpaceDolphin_Saddle_C.ExecuteUbergraph_EngramEntry_SpaceDolphin_Saddle");

	UEngramEntry_SpaceDolphin_Saddle_C_ExecuteUbergraph_EngramEntry_SpaceDolphin_Saddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
