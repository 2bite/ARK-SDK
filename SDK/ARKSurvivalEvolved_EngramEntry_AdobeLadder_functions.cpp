// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_AdobeLadder_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_AdobeLadder.EngramEntry_AdobeLadder_C.ExecuteUbergraph_EngramEntry_AdobeLadder
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_AdobeLadder_C::ExecuteUbergraph_EngramEntry_AdobeLadder(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_AdobeLadder.EngramEntry_AdobeLadder_C.ExecuteUbergraph_EngramEntry_AdobeLadder");

	UEngramEntry_AdobeLadder_C_ExecuteUbergraph_EngramEntry_AdobeLadder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
