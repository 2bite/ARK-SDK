// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TranqSpearBolt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TranqSpearBolt.EngramEntry_TranqSpearBolt_C.ExecuteUbergraph_EngramEntry_TranqSpearBolt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TranqSpearBolt_C::ExecuteUbergraph_EngramEntry_TranqSpearBolt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TranqSpearBolt.EngramEntry_TranqSpearBolt_C.ExecuteUbergraph_EngramEntry_TranqSpearBolt");

	UEngramEntry_TranqSpearBolt_C_ExecuteUbergraph_EngramEntry_TranqSpearBolt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
