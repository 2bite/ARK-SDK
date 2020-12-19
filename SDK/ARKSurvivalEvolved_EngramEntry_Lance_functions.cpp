// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Lance_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Lance.EngramEntry_Lance_C.ExecuteUbergraph_EngramEntry_Lance
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Lance_C::ExecuteUbergraph_EngramEntry_Lance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Lance.EngramEntry_Lance_C.ExecuteUbergraph_EngramEntry_Lance");

	UEngramEntry_Lance_C_ExecuteUbergraph_EngramEntry_Lance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
