// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Boulder_Fire_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Boulder_Fire.EngramEntry_Boulder_Fire_C.ExecuteUbergraph_EngramEntry_Boulder_Fire
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Boulder_Fire_C::ExecuteUbergraph_EngramEntry_Boulder_Fire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Boulder_Fire.EngramEntry_Boulder_Fire_C.ExecuteUbergraph_EngramEntry_Boulder_Fire");

	UEngramEntry_Boulder_Fire_C_ExecuteUbergraph_EngramEntry_Boulder_Fire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
