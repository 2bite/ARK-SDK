// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_StoneGateLarge_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_StoneGateLarge.EngramEntry_StoneGateLarge_C.ExecuteUbergraph_EngramEntry_StoneGateLarge
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_StoneGateLarge_C::ExecuteUbergraph_EngramEntry_StoneGateLarge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_StoneGateLarge.EngramEntry_StoneGateLarge_C.ExecuteUbergraph_EngramEntry_StoneGateLarge");

	UEngramEntry_StoneGateLarge_C_ExecuteUbergraph_EngramEntry_StoneGateLarge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
