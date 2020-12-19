// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_HoloScope_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_HoloScope.EngramEntry_HoloScope_C.ExecuteUbergraph_EngramEntry_HoloScope
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_HoloScope_C::ExecuteUbergraph_EngramEntry_HoloScope(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_HoloScope.EngramEntry_HoloScope_C.ExecuteUbergraph_EngramEntry_HoloScope");

	UEngramEntry_HoloScope_C_ExecuteUbergraph_EngramEntry_HoloScope_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
