// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjAmargaSpike_Cold_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjAmargaSpike_Cold.ProjAmargaSpike_Cold_C.UserConstructionScript
// ()

void AProjAmargaSpike_Cold_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjAmargaSpike_Cold.ProjAmargaSpike_Cold_C.UserConstructionScript");

	AProjAmargaSpike_Cold_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjAmargaSpike_Cold.ProjAmargaSpike_Cold_C.ExecuteUbergraph_ProjAmargaSpike_Cold
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjAmargaSpike_Cold_C::ExecuteUbergraph_ProjAmargaSpike_Cold(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjAmargaSpike_Cold.ProjAmargaSpike_Cold_C.ExecuteUbergraph_ProjAmargaSpike_Cold");

	AProjAmargaSpike_Cold_C_ExecuteUbergraph_ProjAmargaSpike_Cold_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
