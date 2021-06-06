// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_StoneStairs_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_StoneStairs.EngramEntry_StoneStairs_C.ExecuteUbergraph_EngramEntry_StoneStairs
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_StoneStairs_C::ExecuteUbergraph_EngramEntry_StoneStairs(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_StoneStairs.EngramEntry_StoneStairs_C.ExecuteUbergraph_EngramEntry_StoneStairs");

	UEngramEntry_StoneStairs_C_ExecuteUbergraph_EngramEntry_StoneStairs_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
