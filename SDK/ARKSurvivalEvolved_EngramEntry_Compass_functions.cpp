// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Compass_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Compass.EngramEntry_Compass_C.ExecuteUbergraph_EngramEntry_Compass
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Compass_C::ExecuteUbergraph_EngramEntry_Compass(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Compass.EngramEntry_Compass_C.ExecuteUbergraph_EngramEntry_Compass");

	UEngramEntry_Compass_C_ExecuteUbergraph_EngramEntry_Compass_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
