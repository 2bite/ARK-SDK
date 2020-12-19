// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Radio_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Radio.EngramEntry_Radio_C.ExecuteUbergraph_EngramEntry_Radio
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Radio_C::ExecuteUbergraph_EngramEntry_Radio(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Radio.EngramEntry_Radio_C.ExecuteUbergraph_EngramEntry_Radio");

	UEngramEntry_Radio_C_ExecuteUbergraph_EngramEntry_Radio_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
