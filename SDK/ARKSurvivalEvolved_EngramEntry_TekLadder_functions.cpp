// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TekLadder_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TekLadder.EngramEntry_TekLadder_C.ExecuteUbergraph_EngramEntry_TekLadder
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TekLadder_C::ExecuteUbergraph_EngramEntry_TekLadder(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TekLadder.EngramEntry_TekLadder_C.ExecuteUbergraph_EngramEntry_TekLadder");

	UEngramEntry_TekLadder_C_ExecuteUbergraph_EngramEntry_TekLadder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
