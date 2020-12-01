// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_PowerCableVertical_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_PowerCableVertical.EngramEntry_PowerCableVertical_C.ExecuteUbergraph_EngramEntry_PowerCableVertical
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_PowerCableVertical_C::ExecuteUbergraph_EngramEntry_PowerCableVertical(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_PowerCableVertical.EngramEntry_PowerCableVertical_C.ExecuteUbergraph_EngramEntry_PowerCableVertical");

	UEngramEntry_PowerCableVertical_C_ExecuteUbergraph_EngramEntry_PowerCableVertical_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
