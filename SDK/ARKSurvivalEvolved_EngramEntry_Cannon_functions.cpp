// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Cannon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Cannon.EngramEntry_Cannon_C.ExecuteUbergraph_EngramEntry_Cannon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Cannon_C::ExecuteUbergraph_EngramEntry_Cannon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Cannon.EngramEntry_Cannon_C.ExecuteUbergraph_EngramEntry_Cannon");

	UEngramEntry_Cannon_C_ExecuteUbergraph_EngramEntry_Cannon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
