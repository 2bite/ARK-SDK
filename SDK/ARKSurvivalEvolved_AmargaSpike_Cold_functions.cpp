// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AmargaSpike_Cold_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AmargaSpike_Cold.AmargaSpike_Cold_C.UserConstructionScript
// ()

void AAmargaSpike_Cold_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AmargaSpike_Cold.AmargaSpike_Cold_C.UserConstructionScript");

	AAmargaSpike_Cold_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmargaSpike_Cold.AmargaSpike_Cold_C.ExecuteUbergraph_AmargaSpike_Cold
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AAmargaSpike_Cold_C::ExecuteUbergraph_AmargaSpike_Cold(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmargaSpike_Cold.AmargaSpike_Cold_C.ExecuteUbergraph_AmargaSpike_Cold");

	AAmargaSpike_Cold_C_ExecuteUbergraph_AmargaSpike_Cold_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
