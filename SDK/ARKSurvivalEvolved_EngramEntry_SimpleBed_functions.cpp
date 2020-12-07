// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_SimpleBed_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_SimpleBed.EngramEntry_SimpleBed_C.ExecuteUbergraph_EngramEntry_SimpleBed
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_SimpleBed_C::ExecuteUbergraph_EngramEntry_SimpleBed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_SimpleBed.EngramEntry_SimpleBed_C.ExecuteUbergraph_EngramEntry_SimpleBed");

	UEngramEntry_SimpleBed_C_ExecuteUbergraph_EngramEntry_SimpleBed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
