// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjAmargaSpike_Hot_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjAmargaSpike_Hot.ProjAmargaSpike_Hot_C.UserConstructionScript
// ()

void AProjAmargaSpike_Hot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjAmargaSpike_Hot.ProjAmargaSpike_Hot_C.UserConstructionScript");

	AProjAmargaSpike_Hot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjAmargaSpike_Hot.ProjAmargaSpike_Hot_C.ExecuteUbergraph_ProjAmargaSpike_Hot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjAmargaSpike_Hot_C::ExecuteUbergraph_ProjAmargaSpike_Hot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjAmargaSpike_Hot.ProjAmargaSpike_Hot_C.ExecuteUbergraph_ProjAmargaSpike_Hot");

	AProjAmargaSpike_Hot_C_ExecuteUbergraph_ProjAmargaSpike_Hot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
